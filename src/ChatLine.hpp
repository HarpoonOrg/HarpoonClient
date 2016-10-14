#ifndef CHATLINE_H
#define CHATLINE_H


#include <QString>
#include <QGraphicsTextItem>


enum class MessageColor {
    Default,
    Notice,
    Event,
    Action
};

class ChatLine {
    QString time_;
    QString who_;
    QString message_;
    QGraphicsTextItem timeGfx_;
    QGraphicsTextItem whoGfx_;
    QGraphicsTextItem messageGfx_;

public:
    ChatLine(const QString& time,
             const QString& who,
             const QString& message,
             const MessageColor color = MessageColor::Default);

    QString getTime() const;
    QString getWho() const;
    QString getMessage() const;
    const QString& getTimeRef() const;
    const QString& getWhoRef() const;
    const QString& getMessageRef() const;
    QGraphicsTextItem* getTimeGfx();
    QGraphicsTextItem* getWhoGfx();
    QGraphicsTextItem* getMessageGfx();
};


#endif
