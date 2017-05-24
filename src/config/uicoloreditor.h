// Copyright 2017 Alejandro Sirgo Rica
//
// This file is part of Flameshot.
//
//     Flameshot is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.
//
//     Flameshot is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
//
//     You should have received a copy of the GNU General Public License
//     along with Flameshot.  If not, see <http://www.gnu.org/licenses/>.

#ifndef UICOLORPICKER_H
#define UICOLORPICKER_H

#include <QFrame>

class QVBoxLayout;
class QHBoxLayout;
class Button;

class UIcolorEditor : public QFrame {
    Q_OBJECT
public:
    explicit UIcolorEditor(QWidget *parent = 0);

private slots:
    void updateUIcolor();
    void updateLocalColor(const QColor);
    void updateButtonIcon(const QString &);

private:
    QColor m_uiColor;
    Button *m_button;

    QHBoxLayout *hLayout;
    QVBoxLayout *vLayout;

    void initColorWheel();
    void initButton();
    void initComboBox();

    enum class iconColor {Black, White};
    typedef QMap<UIcolorEditor::iconColor, const char *> colorToStringMap;
    static colorToStringMap iconColorToString;
};

#endif // UICOLORPICKER_H
