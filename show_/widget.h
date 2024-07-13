#ifndef WIDGET_H
#define WIDGET_H
#include<QWidget>
#include<QTimer>
#include<QStandardItemModel>
#include<QStringList>
#include<QTableView>
#include<QNetworkReply>
#include<QNetworkRequest>
#include <QNetworkAccessManager>
#include <QRegularExpression>
#include<QCompleter>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlQuery>
#include<QCoreApplication>
#include<QJsonDocument>
#include<QJsonObject>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    void settable();
    void downloadall();
    void download_file(int pn);
    void comboBox();
    void connectsql();
    void fill_line();
    QString search(QString text,QString fn);
<<<<<<< HEAD
    QString getcodeprice(QString code, QString quality);
=======
<<<<<<< HEAD
    QString getcodeprice(QString code, QString quality);
=======
    QString getcodeprice(QString code);
>>>>>>> b651e12 (第二次show)
>>>>>>> e81c1a9 (第二次show)
    QString getcodename(QString code);
    QString get_stock_code(QString name);
    QStringList match(QString text,QString fn);
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void filltable();
    void on_forwardButton_clicked();
    void on_backButton_clicked();
    void on_confirmButton_clicked();
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> e81c1a9 (第二次show)
     void on_lineEdit_code_editingFinished();

private:
    Ui::Widget *ui;
   // QStringList name,number,price;
    QStandardItemModel *model;
    QTimer *update_timer;
<<<<<<< HEAD
=======
=======
    void on_lineEdit_code_editingFinished();

private:
    Ui::Widget *ui;
    // QStringList name,number,price;
    QStandardItemModel *model;
    QTimer *updateTimer;
>>>>>>> b651e12 (第二次show)
>>>>>>> e81c1a9 (第二次show)
    int curpage=1;
    int pagerowcount=20;
    QStringList name,code,cur_price,rise_fall_level,rise_fall_amount;
    QSqlDatabase db;
};
#endif // WIDGET_H