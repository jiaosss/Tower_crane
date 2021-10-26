#include "widget.h"
#include "ui_widget.h"
#include <QString>
#pragma execution_character_set("utf-8")

using namespace std;


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("吊装分析");

    
}

Widget::~Widget()
{
    delete ui;
}

//  显示默认数值（半成品）
/*windows::windows(QWidget* parent)
    :QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}


windows::~windows()
{
    delete ui;
}


void windows::default_value()
{
    ui->lineEdit_k->setPlaceholderText("1.3");
}
*/


void Widget::on_pushButton_js_clicked()
{
    bool ok;
    QString temp_ni, temp_1bl, temp_2bl, temp_3bl, temp_4bl, temp_5bl, temp_6bl, temp_qi1, temp_qi2;
    QString temp_1dz, temp_2dz, temp_3dz, temp_4dz, temp_5dz, temp_6dz, temp_k, temp_bi;
    //QString value_k = ui->lineEdit_k->text();
    //int valueInt_k = value_k.toInt(&ok);
    //double area = valueInt_k*3;
    //ui->lineEdit_ni->setText(temp_ni.setNum(area));
    //导入输入的数据
    QString value_gj = ui->lineEdit_gj->text();
    QString value_mb = ui->lineEdit_mb->text();
    QString value_mf = ui->lineEdit_mf->text();
    QString value_nj = ui->lineEdit_nj->text();
    QString value_wj = ui->lineEdit_wj->text();
    QString value_njkj = ui->lineEdit_njkj->text();
    QString value_wjkj = ui->lineEdit_wjkj->text();
    QString value_qtfz = ui->lineEdit_qtfz->text();
    QString value_gz = ui->lineEdit_gz->text();
    QString value_gl = ui->lineEdit_gl->text();
    QString value_gb = ui->lineEdit_gb->text();
    QString value_lxcl = ui->lineEdit_lxcl->text();
    QString value_yq = ui->lineEdit_yq->text();
    QString value_sb = ui->lineEdit_sb->text();
    QString value_gd = ui->lineEdit_gd->text();
    QString value_mq = ui->lineEdit_mq->text();
    QString value_zxcl = ui->lineEdit_zxcl->text();
    QString value_k = ui->lineEdit_k->text();
    QString value_qi1 = ui->lineEdit_qi1->text();
    QString value_qi2 = ui->lineEdit_qi2->text();
    QString value_bi = ui->lineEdit_bi->text();
    QString value_dxs = ui->lineEdit_dxs->text();
    QString value_jzgd = ui->lineEdit_jzgd->text();
    QString value_gq = ui->lineEdit_gq->text();
    double value_5dz = 0;
    double value_6dz = 0;
    double value_dzsj = 0;
 




    //转换导入的数据格式（qstring->int)
    int valueInt_gj = value_gj.toInt(&ok);
    int valueInt_mb = value_mb.toInt(&ok);
    int valueInt_mf = value_mf.toInt(&ok);
    int valueInt_nj = value_nj.toInt(&ok);
    int valueInt_wj = value_wj.toInt(&ok);
    int valueInt_njkj = value_njkj.toInt(&ok);
    int valueInt_wjkj = value_wjkj.toInt(&ok);
    int valueInt_qtfz = value_qtfz.toInt(&ok);
    int valueInt_gz = value_gz.toInt(&ok);
    int valueInt_gl = value_gl.toInt(&ok);
    int valueInt_gb = value_gb.toInt(&ok);
    int valueInt_lxcl = value_lxcl.toInt(&ok);
    int valueInt_yq = value_yq.toInt(&ok);
    int valueInt_sb = value_sb.toInt(&ok);
    int valueInt_gd = value_gd.toInt(&ok);
    int valueInt_mq = value_mq.toInt(&ok);
    int valueInt_zxcl = value_zxcl.toInt(&ok);
    int valueInt_dxs = value_dxs.toInt(&ok);
    int valueInt_jzgd = value_jzgd.toInt(&ok);
    int valueInt_gq = value_gq.toInt(&ok);
    int valueInt_qi2 = value_qi2.toInt(&ok);
    double valuedou_bi = value_bi.toDouble(&ok);
    double valuedou_k = value_k.toDouble(&ok);
    if (valuedou_k == 0)
    {
        valuedou_k = 1.3;
    }
    /*else
    {
       int valueInt_k = value_k.toInt(&ok);
    }*/
    if (valuedou_bi == 0)
    {
        valuedou_bi = 1;
    }
   /*else
   // {
   //     int valueInt_bi = value_bi.toInt(&ok);
    }*/

    //计算
    double value_dcgj = ceil(valueInt_gj / 0.9);
    double value_dcmb = ceil((valueInt_mb / 83.95) / 0.9); //模板吊次计算
    double value_dcmf = ceil(valueInt_mf / 0.9); //木方吊次计算
    double value_dcnj = ceil(valueInt_nj / 0.9); //内架
    double value_dcwj = ceil(valueInt_wj / 0.9); //外架
    double value_dcnjkj = ceil(valueInt_njkj / 0.6 / 0.9); //内架扣件
    double value_dcwjkj = ceil(valueInt_wjkj / 0.6 / 0.9);
    double value_dcqtfz = ceil(valueInt_qtfz / 0.9);
    double value_dcgz = ceil(valueInt_gz / 0.9);
    double value_dcgl = ceil(valueInt_gl / 2 / 0.9);
    double value_dcgb = ceil(valueInt_gb / 0.9);
    double value_dclxcl = ceil(valueInt_lxcl/ 0.9);
    double value_dcyq = ceil(valueInt_yq / 0.9);
    double value_dcsb = ceil(valueInt_sb / 0.9);
    double value_dcgd = ceil(valueInt_gd / 0.9);
    double value_dcmq = ceil(valueInt_mq);
    double value_dczxcl = ceil(valueInt_zxcl / 0.9);

    double value_1dz = value_dcgz;
    double value_2dz = value_dcgl + value_dcgj;
    double value_3dz = value_dcsb;
    double value_4dz = value_dcqtfz + value_dclxcl + value_dcyq + value_dcgd + value_dcmq + value_dczxcl;
    if (valueInt_dxs == 1)   //地下室
    {
        value_5dz = value_dcmb + value_dcmf + value_dcnj + value_dcnjkj + value_dcwjkj;
    }
    else   //地上
    {
        value_6dz = value_dcmb + value_dcmf + value_dcnj + value_dcnjkj + value_dcwjkj;
    }
    //计算所占比例
    double value_dz = value_1dz + value_2dz + value_3dz + value_4dz + value_5dz + value_6dz;
    double value_2bl = value_2dz / value_dz;
    double value_3bl = value_3dz / value_dz;
    double value_4bl = value_4dz / value_dz;
    double value_5bl = value_5dz / value_dz;
    double value_6bl = value_6dz / value_dz;
    double value_1bl = 1 - value_2bl - value_3bl - value_4bl - value_5bl - value_6bl;

    if (valueInt_dxs == 1)   //地下室
    {
        value_dzsj = 4.5;
    }
    else   //地上
    {
        switch (valueInt_jzgd)
        {
        case 1:
        {
            value_dzsj = (25.5 * value_1bl) + (6 * value_2bl) + (10.5 * value_3bl) + (5 * value_4bl) + (6 * value_6bl);
        }
        case 2:
        {
            value_dzsj = (27.5 * value_1bl) + (7 * value_2bl) + (12.5 * value_3bl) + (5.5 * value_4bl) + (8 * value_6bl);
        }
        case 3:
        {
            value_dzsj = (29 * value_1bl) + (12 * value_2bl) + (12 * value_6bl) + (9.3 * value_3bl) + (14.5 * value_4bl);
        }
        }
    }

    //计算Ni
    double value_qi5 = 8 * 0.8 * 60 / value_dzsj;
    double value_ni = (value_dz * valuedou_k) / ( value_qi5 * valuedou_bi * valueInt_gq );



    //显示结果
    ui->lineEdit_1dz->setText(temp_1dz.setNum(value_1dz));
    ui->lineEdit_2dz->setText(temp_2dz.setNum(value_2dz));
    ui->lineEdit_3dz->setText(temp_3dz.setNum(value_3dz));
    ui->lineEdit_4dz->setText(temp_4dz.setNum(value_4dz));
    ui->lineEdit_5dz->setText(temp_5dz.setNum(value_5dz));
    ui->lineEdit_6dz->setText(temp_6dz.setNum(value_6dz));
    ui->lineEdit_1bl->setText(temp_1bl.setNum(value_1bl));
    ui->lineEdit_2bl->setText(temp_2bl.setNum(value_2bl));
    ui->lineEdit_3bl->setText(temp_3bl.setNum(value_3bl));
    ui->lineEdit_4bl->setText(temp_4bl.setNum(value_4bl));
    ui->lineEdit_5bl->setText(temp_5bl.setNum(value_5bl));
    ui->lineEdit_6bl->setText(temp_6bl.setNum(value_6bl));
    ui->lineEdit_qi1->setText(temp_qi1.setNum(value_dz));
    ui->lineEdit_qi2->setText(temp_qi2.setNum(value_qi5));
    ui->lineEdit_k->setText(temp_k.setNum(valuedou_k));
    ui->lineEdit_bi->setText(temp_bi.setNum(valuedou_bi));
    ui->lineEdit_ni->setText(temp_ni.setNum(value_ni));







    /*跳转页面*/
    ui->tabWidget->setCurrentIndex(1);


    







}


void Widget::default_value()
{
    ui->lineEdit_ni->setPlaceholderText("1.3");
}