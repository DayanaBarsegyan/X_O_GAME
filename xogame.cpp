#include "xogame.h"

#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>

int count = 0;

XOGame::XOGame()
{
    tl = new QPushButton;
    tl->setFixedWidth(37);
    tm = new QPushButton;
    tm->setFixedWidth(37);
    tr1 = new QPushButton;
    tr1->setFixedWidth(37);
    ml = new QPushButton;
    ml->setFixedWidth(37);
    mm = new QPushButton;
    mm->setFixedWidth(37);
    mr = new QPushButton;
    mr->setFixedWidth(37);
    bl = new QPushButton;
    bl->setFixedWidth(37);
    bm = new QPushButton;
    bm->setFixedWidth(37);
    br = new QPushButton;
    br->setFixedWidth(37);

    X_won = new QLabel("Player1 won!");
    X_won->hide();
    O_won = new QLabel("Player2 won!");
    O_won->hide();
    Nobody_won = new QLabel("Nobody won!");
    Nobody_won->hide();

    set_layout();
    set_connections();
}

void XOGame::set_layout()
{
    QHBoxLayout* h1 = new QHBoxLayout;
    h1->addWidget(tl);
    h1->addWidget(tm);
    h1->addWidget(tr1);

    QHBoxLayout* h2 = new QHBoxLayout;
    h2->addWidget(ml);
    h2->addWidget(mm);
    h2->addWidget(mr);

    QHBoxLayout* h3 = new QHBoxLayout;
    h3->addWidget(bl);
    h3->addWidget(bm);
    h3->addWidget(br);

    QVBoxLayout* v = new QVBoxLayout;
    v->addLayout(h1);
    v->addLayout(h2);
    v->addLayout(h3);
    v->addWidget(X_won);
    v->addWidget(O_won);
    v->addWidget(Nobody_won);

    setLayout(v);
}

void XOGame::set_connections()
{
    connect(tl, SIGNAL(clicked(bool)),
            this, SLOT(set_tl_settings()));
    connect(tm, SIGNAL(clicked(bool)),
            this, SLOT(set_tm_settings()));
    connect(tr1, SIGNAL(clicked(bool)),
            this, SLOT(set_tr1_settings()));
    connect(ml, SIGNAL(clicked(bool)),
            this, SLOT(set_ml_settings()));
    connect(mm, SIGNAL(clicked(bool)),
            this, SLOT(set_mm_settings()));
    connect(mr, SIGNAL(clicked(bool)),
            this, SLOT(set_mr_settings()));
    connect(bl, SIGNAL(clicked(bool)),
            this, SLOT(set_bl_settings()));
    connect(bm, SIGNAL(clicked(bool)),
            this, SLOT(set_bm_settings()));
    connect(br, SIGNAL(clicked(bool)),
            this, SLOT(set_br_settings()));
}

void XOGame::set_tl_settings()
{
    if(count % 2 == 0)
    {
        tl->setText("X");
        tl->setDisabled(true);
    }
    else
    {
        tl->setText("O");
        tl->setDisabled(true);
    }
    game_over();
    count++;
}

void XOGame::set_tm_settings()
{
    if(count % 2 == 0)
    {
        tm->setText("X");
        tm->setDisabled(true);
    }
    else
    {
        tm->setText("O");
        tm->setDisabled(true);
    }
    game_over();
    count++;
}
void XOGame::set_tr1_settings()
{
    if(count % 2 == 0)
    {
        tr1->setText("X");
        tr1->setDisabled(true);
    }
    else
    {
        tr1->setText("O");
        tr1->setDisabled(true);
    }
    game_over();
    count++;
}

void XOGame::set_ml_settings()
{
    if(count % 2 == 0)
    {
        ml->setText("X");
        ml->setDisabled(true);
    }
    else
    {
        ml->setText("O");
        ml->setDisabled(true);
    }
    game_over();
    count++;
}

void XOGame::set_mm_settings()
{
    if(count % 2 == 0)
    {
        mm->setText("X");
        mm->setDisabled(true);
    }
    else
    {
        mm->setText("O");
        mm->setDisabled(true);
    }
    game_over();
    count++;
}

void XOGame::set_mr_settings()
{
    if(count % 2 == 0)
    {
        mr->setText("X");
        mr->setDisabled(true);
    }
    else
    {
        mr->setText("O");
        mr->setDisabled(true);
    }
    game_over();
    count++;
}

void XOGame::set_bl_settings()
{
    if(count % 2 == 0)
    {
        bl->setText("X");
        bl->setDisabled(true);
    }
    else
    {
        bl->setText("O");
        bl->setDisabled(true);
    }
    game_over();
    count++;
}

void XOGame::set_bm_settings()
{
    if(count % 2 == 0)
    {
        bm->setText("X");
        bm->setDisabled(true);
    }
    else
    {
        bm->setText("O");
        bm->setDisabled(true);
    }
    game_over();
    count++;
}

void XOGame::set_br_settings()
{
    if(count % 2 == 0)
    {
        br->setText("X");
        br->setDisabled(true);
    }
    else
    {
        br->setText("O");
        br->setDisabled(true);
    }
    game_over();
    count++;
}

void XOGame::game_over()
{
    if((tl->text() == "X" && tm->text() == "X" && tr1->text() == "X")
    || (ml->text() == "X" && mm->text() == "X" && mr->text() == "X")
    || (bl->text() == "X" && bm->text() == "X" && br->text() == "X")
    ||(tl->text() == "X" && mm->text() == "X" && br->text() == "X")
    ||(tr1->text() == "X" && mm->text() == "X" && bl->text() == "X")
    || (tl->text() == "X" && ml->text() == "X" && bl->text() == "X")
    || (tm->text() == "X" && mm->text() == "X" && bm->text() == "X")
    ||(tr1->text() == "X" && mr->text() == "X" && br->text() == "X"))
    {
        X_won->show();
    }

    else if((tl->text() == "O" && tm->text() == "O" && tr1->text() == "O")
    || (ml->text() == "O" && mm->text() == "O" && mr->text() == "O")
    || (bl->text() == "O" && bm->text() == "O" && br->text() == "O")
    ||(tl->text() == "O" && mm->text() == "O" && br->text() == "O")
    ||(tr1->text() == "O" && mm->text() == "O" && bl->text() == "O")
    || (tl->text() == "O" && ml->text() == "O" && bl->text() == "O")
    || (tm->text() == "O" && mm->text() == "O" && bm->text() == "O")
    ||(tr1->text() == "O" && mr->text() == "O" && br->text() == "O"))

    {
        O_won->show();
    }

    else if(count == 8)
    {
        Nobody_won->show();
    }
}
