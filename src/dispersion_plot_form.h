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


#ifndef DISPERSION_PLOT_FORM_H
#define DISPERSION_PLOT_FORM_H

#include <QWidget>
#include <QVector>
#include <QList>

namespace Ui {
class DispersionPlotForm;
}

class Glass;
class GlassCatalog;
class QCustomPlot;
class QCPGraph;
class QTableWidget;
class QCheckBox;
class QComboBox;
class QListWidget;

class DispersionPlotForm : public QWidget
{
    Q_OBJECT

public:
    explicit DispersionPlotForm(QList<GlassCatalog*> catalogList, QWidget *parent = nullptr);
    ~DispersionPlotForm();

private slots:
    void on_comboBoxChanged();
    void addGraph();
    void deleteGraph();
    void setAxis();
    void setLegendVisible();
    void updateAll();
    void clearAll();

private:
    Ui::DispersionPlotForm *ui;

    QCustomPlot*  m_customPlot;
    QCheckBox*    m_checkBox;
    QTableWidget* m_tablePlotData;
    const int     m_maxGraphCount = 5;

    QComboBox* m_comboBoxFormula;
    QTableWidget* m_tableCoefs;

    QList<GlassCatalog*> m_catalogList;
    QList<Glass*>        m_glassList;

    void            setDefault();
    void            setColorToGraph(QCPGraph* graph, QColor color);
    QVector<double> computeUserDefined(QVector<double> xdata);
    void            addTableItem(int row, int col, QString str);
};

#endif // DISPERSION_PLOT_FORM_H
