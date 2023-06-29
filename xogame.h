#ifndef XOGAME_H
#define XOGAME_H

#include <QDialog>

class QPushButton;
class QLabel;

class XOGame: public QDialog
{
    Q_OBJECT
public:
    XOGame();

private slots:
    void set_tl_settings();
    void set_tm_settings();
    void set_tr1_settings();
    void set_ml_settings();
    void set_mm_settings();
    void set_mr_settings();
    void set_bl_settings();
    void set_bm_settings();
    void set_br_settings();

private:
    void set_layout();
    void set_connections();
    void game_over();

private:
    QPushButton* tl;
    QPushButton* tm;
    QPushButton* tr1;
    QPushButton* ml;
    QPushButton* mm;
    QPushButton* mr;
    QPushButton* bl;
    QPushButton* bm;
    QPushButton* br;

    QLabel* X_won;
    QLabel* O_won;
    QLabel* Nobody_won;
};

#endif // XOGAME_H
