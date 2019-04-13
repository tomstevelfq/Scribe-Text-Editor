#ifndef UTILITYFUNCTIONS_H
#define UTILITYFUNCTIONS_H
#include <QString>
#include <QMessageBox>


namespace Utility
{
    QMessageBox::StandardButton promptYesOrNo(QWidget *parent, QString title, QString prompt);
    bool braceIsBalanced(QString context, int openBraceIndex);
    int indexOfFirstUnbalancedClosingBrace(QString context);
}

#endif // UTILITYFUNCTIONS_H
