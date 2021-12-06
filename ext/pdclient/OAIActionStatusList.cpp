/**
 * Port Drayage Web Service.
 * Web Service for Loading/Unloading/Inspection interactions for Port Drayage Operations.
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIActionStatusList.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActionStatusList::OAIActionStatusList(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActionStatusList::OAIActionStatusList() {
    this->initializeModel();
}

OAIActionStatusList::~OAIActionStatusList() {}

void OAIActionStatusList::initializeModel() {

    m_actions_isSet = false;
    m_actions_isValid = false;
}

void OAIActionStatusList::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActionStatusList::fromJsonObject(QJsonObject json) {

    m_actions_isValid = ::OpenAPI::fromJsonValue(actions, json[QString("actions")]);
    m_actions_isSet = !json[QString("actions")].isNull() && m_actions_isValid;
}

QString OAIActionStatusList::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActionStatusList::asJsonObject() const {
    QJsonObject obj;
    if (actions.size() > 0) {
        obj.insert(QString("actions"), ::OpenAPI::toJsonValue(actions));
    }
    return obj;
}

QList<OAIContainerActionStatus> OAIActionStatusList::getActions() const {
    return actions;
}
void OAIActionStatusList::setActions(const QList<OAIContainerActionStatus> &actions) {
    this->actions = actions;
    this->m_actions_isSet = true;
}

bool OAIActionStatusList::is_actions_Set() const{
    return m_actions_isSet;
}

bool OAIActionStatusList::is_actions_Valid() const{
    return m_actions_isValid;
}

bool OAIActionStatusList::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (actions.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIActionStatusList::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
