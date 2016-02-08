#include "xpikshelloworldplugin.h"
#include <QDebug>
#include "makeuserhappyaction.h"

XpiksHelloworldPlugin::XpiksHelloworldPlugin(QObject *parent):
    QObject(parent),
    m_CommandManager(NULL),
    m_UndoRedoManager(NULL)
{
    m_PrettyName = QLatin1String("HelloWorldPlugin");
    m_Version = QLatin1String("v0.0.1");
    m_Author = QLatin1String("John Doe");

    MakeUserHappyAction *makeUserHappy = new MakeUserHappyAction();
    m_MyActions.push_back(makeUserHappy);
    m_ActionsHash.insert(makeUserHappy->getActionID(), makeUserHappy);
}

bool XpiksHelloworldPlugin::executeAction(int actionID) {
    if (m_ActionsHash.contains(actionID)) {
        // EXECUTE ACTION
        qInfo() << "XpiksHelloworldPlugin::executeAction #" << "Executing action:" << actionID;
    }

    return true;
}

void XpiksHelloworldPlugin::injectCommandManager(Commands::ICommandManager *commandManager) {
    m_CommandManager = commandManager;
}

void XpiksHelloworldPlugin::injectUndoRedoManager(UndoRedo::IUndoRedoManager *undoRedoManager) {
    m_UndoRedoManager = undoRedoManager;
}
