#include "widget.h"

#include "iostream"
#include <QString>

Widget::Widget(QWidget *parent)
        : QWidget(parent)
{
    connect(&m_textEdit, SIGNAL(textChanged()), this, SLOT(onTextChanged()));
    connect(&m_textEdit, SIGNAL(cursorPositionChanged()), this, SLOT(onCursorPositionChanged()));


    m_layout.addWidget(&m_textEdit);
    m_layout.addWidget(&m_label);

    setLayout(&m_layout);
}

Widget::~Widget()
{

}

void Widget::onTextChanged()
{
    qDebug() <<m_textEdit.toPlainText();
}

void Widget::onCursorPositionChanged()
{
    // Code that executes on cursor change here
    m_cursor = m_textEdit.textCursor();
    m_label.setText(QString("Position: %1").arg(m_cursor.positionInBlock()));
}