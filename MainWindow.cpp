#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_firstWindow = new FirstWindow( this );
    m_secondWindow = new SecondWindow( this );

    ui->mdiArea->addSubWindow( m_firstWindow );
    ui->mdiArea->addSubWindow( m_secondWindow );

    connect( m_firstWindow, SIGNAL( signalSetSettings(Settings) ),
             m_secondWindow, SLOT( slotSetSettings(Settings) ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}
