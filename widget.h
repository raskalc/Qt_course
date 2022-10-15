#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QTextCursor>
#include <QVBoxLayout>
#include <QLabel>

class Widget : public QWidget
{
Q_OBJECT

public:
    Widget(QWidget *parent = 0);

    ~Widget();

private slots:
    void onTextChanged();
    void onCursorPositionChanged();

private:
    QTextCursor m_cursor;
    QVBoxLayout m_layout;
    QTextEdit m_textEdit;
    QLabel m_label;
};

#endif // WIDGET_H