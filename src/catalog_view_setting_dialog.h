#ifndef CATALOG_VIEW_SETTING_DIALOG_H
#define CATALOG_VIEW_SETTING_DIALOG_H

#include <QDialog>
#include <QStringList>
#include <QListWidget>

namespace Ui {
class CatalogViewSettingDialog;
}

class CatalogViewSettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CatalogViewSettingDialog(QStringList allPropertyList ,QWidget *parent = nullptr);
    ~CatalogViewSettingDialog();

    void getSettings(QStringList& checkedList, int& digit);

private:
    Ui::CatalogViewSettingDialog *ui;

    QListWidget* m_listWidget;
};

#endif // CATALOG_VIEW_SETTING_DIALOG_H
