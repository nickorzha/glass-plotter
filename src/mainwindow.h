/*****************************************************************************
 **                                                                         **
 **  This file is part of GlassPlotter.                                     **
 **                                                                         **
 **  GlassPlotter is free software: you can redistribute it and/or modify   **
 **  it under the terms of the GNU General Public License as published by   **
 **  the Free Software Foundation, either version 3 of the License, or      **
 **  (at your option) any later version.                                    **
 **                                                                         **
 **  GlassPlotter is distributed in the hope that it will be useful,        **
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of         **
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          **
 **  GNU General Public License for more details.                           **
 **                                                                         **
 **  You should have received a copy of the GNU General Public License      **
 **  along with GlassPlotter.  If not, see <http://www.gnu.org/licenses/>.  **
 **                                                                         **
 *****************************************************************************
 **  Author  : Hiiragi                                                      **
 **  Contact : heterophyllus.work@gmail.com                                 **
 **  Website : https://github.com/heterophyllus/glassplotter                **
 **  Date    : 2020-1-25                                                    **
 *****************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "qcustomplot.h"

class GlassCatalog;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    template<class F> void showAnalysisForm();
    void showGlassMap(QString xdataname, QString ydataname,QCPRange xrange, QCPRange yrange, bool xreversed=true);

private slots:
    void loadAGF();
    void loadXML();

    void showGlassMapNdVd();
    void showGlassMapNeVe();
    void showGlassMapVdPgF();
    void showGlassMapVdPCt();
    void showGlassMapBuchdahl();
    void showDispersionPlot();
    void showTransmittancePlot();
    void showDnDtabsPlot();
    void showCatalogViewForm();

    void tileWindows();
    void cascadeWindows();
    void closeAll();

    void showAbout();

private:
    Ui::MainWindow *ui;
    QList<GlassCatalog*> m_catalogList;
};
#endif // MAINWINDOW_H
