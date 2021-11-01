#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>




QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE



class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    void on_pushButton_js_clicked();
    void on_pushButton_sz_clicked();


private:
    Ui::Widget *ui;

    bool ok;
    QString temp_ni, temp_1bl, temp_2bl, temp_3bl, temp_4bl, temp_5bl, temp_6bl, temp_qi1, temp_qi2;
    QString temp_1dz, temp_2dz, temp_3dz, temp_4dz, temp_5dz, temp_6dz, temp_k, temp_bi, temp_defalt1;


};
#endif // WIDGET_H

