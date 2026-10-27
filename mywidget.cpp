#include "mywidget.h"
#include "ui_mywidget.h"

#include <QFile>
#include <QDebug>
#include <QFileDialog>

QString mFileName = "C:/Documents/Windows Programming/myfile.txt";

void CbWrite(QString fileName, QString str)
{
    QFile outFile(fileName); //宣告QFile函數
    //寫入檔案判斷
    if(!outFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug()<<"Could not open file for write";
        return;
    }

    QTextStream out(&outFile);
    out.setEncoding(QStringConverter::System);

    out<<str;       //將內容輸出至txt檔
    outFile.flush();  //刷新 mFile
    outFile.close();  //關閉 mFile
}

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::MyWidget)
{
    ui->setupUi(this); //呼叫命名空間 Ui 內的 MyWidget物件之成員函數 setupUi 自己的記憶體位址
    ui->contactBook->setColumnCount(4);
    QStringList colTotal;
    colTotal<<"學號"<<"班級"<<"姓名"<<"電話";
    ui->contactBook->setHorizontalHeaderLabels(colTotal);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_insertButton_clicked()
{
    QTableWidgetItem *col1, *col2, *col3, *col4;
    col1 = new QTableWidgetItem(ui->lineEdit_1->text());
    col2 = new QTableWidgetItem(ui->lineEdit_2->text());
    col3 = new QTableWidgetItem(ui->lineEdit_3->text());
    col4 = new QTableWidgetItem(ui->lineEdit_4->text());

    int row = ui->contactBook->rowCount();
    qDebug()<<row;
    ui->contactBook->insertRow(row); //新增一列(在第幾列)0,1,2,...
    ui->contactBook->setItem(row,0,col1);
    ui->contactBook->setItem(row,1,col2);
    ui->contactBook->setItem(row,2,col3);
    ui->contactBook->setItem(row,3,col4);
}
void MyWidget::on_exportButton_clicked()
{
    QString fileName;
    QString saveStr;
    fileName = QFileDialog::getSaveFileName(this,"匯出通訊錄",".","csv(*.csv);;text(*.txt)");
    for(int i = 0; i < ui->contactBook->rowCount(); i++){
        for(int j = 0; j < ui->contactBook->columnCount(); j++){
            saveStr += ui->contactBook->item(i,j)->text()+(j < ui->contactBook->columnCount() ? "," : "");
        }
        saveStr += "\n";
    }
    CbWrite(fileName,saveStr);
}
void MyWidget::on_importButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "匯入通訊錄", ".", "csv(*.csv);;text(*.txt)");
    if (fileName.isEmpty()) return;

    QFile inFile(fileName);
    if (!inFile.open(QFile::ReadOnly | QFile::Text)) return;

    QTextStream in(&inFile);
    in.setEncoding(QStringConverter::System);

    ui->contactBook->setRowCount(0); // Kosongkan tabel sebelum impor

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList data = line.split(',');
        int row = ui->contactBook->rowCount();
        ui->contactBook->insertRow(row);

        for (int i = 0; i < data.size() && i < ui->contactBook->columnCount(); i++) {
            ui->contactBook->setItem(row, i, new QTableWidgetItem(data[i]));
        }
    }
    inFile.close();
}

//final