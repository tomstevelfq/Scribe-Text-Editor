#include "tabbededitor.h"


/*
 */
TabbedEditor::TabbedEditor(QWidget *parent) : QTabWidget(parent)
{
    add(new Editor());
    setFocusProxy(qobject_cast<Editor*>(currentWidget()));
}


void TabbedEditor::add(Editor *tab)
{
    QTabWidget::addTab(tab, tab->getFileName());
    tab->setFont("Courier", QFont::Monospace, true, 10, 5);
    setCurrentWidget(tab);
}
