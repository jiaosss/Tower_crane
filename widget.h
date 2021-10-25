#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>




QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

//  显示默认数值（半成品）
/*class windows : public QWidget
{
    Q_OBJECT
public:
    windows(QWidget *parent = nullptr);
    ~windows();

public slots:
    void default_value();
private:
    Ui::Widget *ui;
};
*/


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void default_value();


private slots:
    void on_pushButton_js_clicked();
    


private:
    Ui::Widget *ui;


};
#endif // WIDGET_H

