/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QLabel *polin_text_label;
    QLabel *polin_num_label;
    QLabel *an_label_2;
    QComboBox *eprint_box;
    QGridLayout *gridLayout_3;
    QLineEdit *new_size_edit;
    QLabel *size_label;
    QLabel *index_change_label;
    QLineEdit *index_change_edit;
    QPushButton *exit_buttom;
    QGridLayout *gridLayout_6;
    QLabel *i_label_2;
    QGridLayout *gridLayout_5;
    QLineEdit *re_edit;
    QLabel *x_label;
    QLineEdit *im_edit;
    QLabel *an_label;
    QLabel *i_label;
    QGridLayout *gridLayout;
    QPushButton *change_len_but;
    QPushButton *enter_pol_but;
    QPushButton *index_change_buttom;
    QPushButton *change_print_but;
    QPushButton *change_an_but;
    QPushButton *enter_X_but;
    QLineEdit *result_line;
    QPushButton *do_but;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QString::fromUtf8("Interface"));
        Interface->resize(695, 479);
        Interface->setCursor(QCursor(Qt::ArrowCursor));
        Interface->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Interface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 641, 391));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        polin_text_label = new QLabel(widget);
        polin_text_label->setObjectName(QString::fromUtf8("polin_text_label"));

        gridLayout_4->addWidget(polin_text_label, 1, 0, 1, 1);

        polin_num_label = new QLabel(widget);
        polin_num_label->setObjectName(QString::fromUtf8("polin_num_label"));

        gridLayout_4->addWidget(polin_num_label, 1, 1, 1, 1);

        an_label_2 = new QLabel(widget);
        an_label_2->setObjectName(QString::fromUtf8("an_label_2"));

        gridLayout_4->addWidget(an_label_2, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        eprint_box = new QComboBox(widget);
        eprint_box->addItem(QString());
        eprint_box->addItem(QString());
        eprint_box->setObjectName(QString::fromUtf8("eprint_box"));

        gridLayout_7->addWidget(eprint_box, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        new_size_edit = new QLineEdit(widget);
        new_size_edit->setObjectName(QString::fromUtf8("new_size_edit"));

        gridLayout_3->addWidget(new_size_edit, 0, 1, 1, 1);

        size_label = new QLabel(widget);
        size_label->setObjectName(QString::fromUtf8("size_label"));

        gridLayout_3->addWidget(size_label, 0, 0, 1, 1);

        index_change_label = new QLabel(widget);
        index_change_label->setObjectName(QString::fromUtf8("index_change_label"));

        gridLayout_3->addWidget(index_change_label, 1, 0, 1, 1);

        index_change_edit = new QLineEdit(widget);
        index_change_edit->setObjectName(QString::fromUtf8("index_change_edit"));

        gridLayout_3->addWidget(index_change_edit, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 0, 3, 1, 1);

        exit_buttom = new QPushButton(widget);
        exit_buttom->setObjectName(QString::fromUtf8("exit_buttom"));

        gridLayout_7->addWidget(exit_buttom, 0, 4, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        i_label_2 = new QLabel(widget);
        i_label_2->setObjectName(QString::fromUtf8("i_label_2"));

        gridLayout_6->addWidget(i_label_2, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        re_edit = new QLineEdit(widget);
        re_edit->setObjectName(QString::fromUtf8("re_edit"));

        gridLayout_5->addWidget(re_edit, 0, 2, 1, 1);

        x_label = new QLabel(widget);
        x_label->setObjectName(QString::fromUtf8("x_label"));

        gridLayout_5->addWidget(x_label, 0, 0, 1, 1);

        im_edit = new QLineEdit(widget);
        im_edit->setObjectName(QString::fromUtf8("im_edit"));

        gridLayout_5->addWidget(im_edit, 0, 4, 1, 1);

        an_label = new QLabel(widget);
        an_label->setObjectName(QString::fromUtf8("an_label"));

        gridLayout_5->addWidget(an_label, 0, 1, 1, 1);

        i_label = new QLabel(widget);
        i_label->setObjectName(QString::fromUtf8("i_label"));

        gridLayout_5->addWidget(i_label, 0, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 1, 0, 1, 3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        change_len_but = new QPushButton(widget);
        change_len_but->setObjectName(QString::fromUtf8("change_len_but"));

        gridLayout->addWidget(change_len_but, 4, 0, 1, 1);

        enter_pol_but = new QPushButton(widget);
        enter_pol_but->setObjectName(QString::fromUtf8("enter_pol_but"));

        gridLayout->addWidget(enter_pol_but, 2, 0, 1, 1);

        index_change_buttom = new QPushButton(widget);
        index_change_buttom->setObjectName(QString::fromUtf8("index_change_buttom"));
        QFont font;
        font.setPointSize(7);
        index_change_buttom->setFont(font);

        gridLayout->addWidget(index_change_buttom, 5, 0, 1, 1);

        change_print_but = new QPushButton(widget);
        change_print_but->setObjectName(QString::fromUtf8("change_print_but"));

        gridLayout->addWidget(change_print_but, 3, 0, 1, 1);

        change_an_but = new QPushButton(widget);
        change_an_but->setObjectName(QString::fromUtf8("change_an_but"));

        gridLayout->addWidget(change_an_but, 0, 0, 1, 1);

        enter_X_but = new QPushButton(widget);
        enter_X_but->setObjectName(QString::fromUtf8("enter_X_but"));

        gridLayout->addWidget(enter_X_but, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 2, 0, 1, 1);

        result_line = new QLineEdit(widget);
        result_line->setObjectName(QString::fromUtf8("result_line"));
        result_line->setReadOnly(true);

        gridLayout_7->addWidget(result_line, 2, 2, 1, 3);

        do_but = new QPushButton(widget);
        do_but->setObjectName(QString::fromUtf8("do_but"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Code Pro"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        do_but->setFont(font1);
        do_but->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(75, 255, 10);\n"
"font: 20pt \"Source Code Pro\";"));

        gridLayout_7->addWidget(do_but, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout_7->addLayout(gridLayout_2, 4, 0, 1, 5);


        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QWidget *Interface)
    {
        Interface->setWindowTitle(QCoreApplication::translate("Interface", "Interface", nullptr));
        polin_text_label->setText(QCoreApplication::translate("Interface", "\320\232\320\276\321\200\320\265\320\275\321\214 \342\204\226", nullptr));
        polin_num_label->setText(QCoreApplication::translate("Interface", "1", nullptr));
        an_label_2->setText(QCoreApplication::translate("Interface", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 an", nullptr));
        eprint_box->setItemText(0, QCoreApplication::translate("Interface", "\320\244\320\276\321\200\320\274\320\260 1", nullptr));
        eprint_box->setItemText(1, QCoreApplication::translate("Interface", "\320\244\320\276\321\200\320\274\320\260 2", nullptr));

        size_label->setText(QCoreApplication::translate("Interface", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\275\320\276\320\262\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 =", nullptr));
        index_change_label->setText(QCoreApplication::translate("Interface", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\270\320\275\320\264\320\265\320\272\321\201 \320\272\320\276\321\200\320\275\321\217 =", nullptr));
        exit_buttom->setText(QCoreApplication::translate("Interface", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        i_label_2->setText(QCoreApplication::translate("Interface", "i", nullptr));
        x_label->setText(QCoreApplication::translate("Interface", "x = ", nullptr));
        an_label->setText(QCoreApplication::translate("Interface", "a = ", nullptr));
        i_label->setText(QCoreApplication::translate("Interface", "+", nullptr));
        change_len_but->setText(QCoreApplication::translate("Interface", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\200\320\260\320\267\320\274\320\265\321\200 ", nullptr));
        enter_pol_but->setText(QCoreApplication::translate("Interface", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\320\273\320\270\320\275\320\276\320\274", nullptr));
        index_change_buttom->setText(QCoreApplication::translate("Interface", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\276\321\200\320\265\320\275\321\214 \320\277\320\276 \320\270\320\275\320\264\320\265\320\272\321\201\321\203", nullptr));
        change_print_but->setText(QCoreApplication::translate("Interface", "\320\222\321\213\320\262\320\265c\321\202\320\270 \320\277\320\276\320\273\320\270\320\275\320\276\320\274", nullptr));
        change_an_but->setText(QCoreApplication::translate("Interface", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 an", nullptr));
        enter_X_but->setText(QCoreApplication::translate("Interface", "\320\222\320\262\320\265\321\201\321\202\320\270 x", nullptr));
        do_but->setText(QCoreApplication::translate("Interface", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
