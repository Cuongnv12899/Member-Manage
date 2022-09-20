#ifndef SCREENBUILDING_H
#define SCREENBUILDING_H
#include <QObject>
#include <QString>
#include <QAbstractListModel>
#include <QQuickItem>

////chứa data/////
//class TodoItem :public QObject
//{
//    Q_OBJECT
//    Q_PROPERTY(QString fullname READ fullname WRITE setfullname NOTIFY fullnameChanged)
//    Q_PROPERTY(QString rank READ rank WRITE setrank NOTIFY rankChanged)
//    Q_PROPERTY(QString domain READ domain WRITE setdomain NOTIFY domainChanged)
//    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)
//    Q_PROPERTY(QString gender READ gender WRITE setgender NOTIFY genderChanged)
//    Q_PROPERTY(QString allocated READ allocated WRITE setallocated NOTIFY allocatedChanged)

//public:
//////khởi tạo todoitem với các biến chứa data////
//    explicit TodoItem(QObject *parent = nullptr):QObject(parent){}
//    ~TodoItem();
// Q_INVOKABLE void getTodoItem(const QString &fullname,const QString &rank,const QString &domain,const int &age,const QString &gender,const QString &allocated, QObject *parent = nullptr){
//        mFullname = fullname;
//        mDomain = domain;
//        mGender = gender;
//        mRank = rank;
//        mAge = age;
//        mAllocated = allocated;
//    }
//////get set data///
//    QString fullname() const{
//        return mFullname;
//    }

//    void setfullname(const QString &fullname){
//        if(mFullname == fullname){
//            return;
//        }
//        mFullname = fullname;
//        emit fullnameChanged();
//    }

//    QString rank() const{
//        return mRank;
//    }
//    void setrank(const QString &rank){
//        if(mRank == rank){
//            return ;
//        }
//        mRank = rank;
//        emit rankChanged();
//    }
//    QString domain() const{
//        return mDomain;
//    }
//    void setdomain(const QString &domain){
//        if(mDomain == domain){
//            return ;
//        }
//        mDomain = domain;
//        emit domainChanged();
//    }
//    int age() const{
//        return mAge;
//    }
//    void setAge(const int &age){
//        if( mAge == age){
//            return ;
//        }
//        mAge = age;
//        emit ageChanged();
//    }
//    QString gender() const{
//        return mGender;
//    }
//    void setgender(const QString &gender){
//        if(mGender == gender){
//            return ;
//        }
//        mGender = gender;
//        emit genderChanged();
//    }
//    QString allocated() const{
//        return mAllocated;
//    }
//    void setallocated(const QString &allocated){
//        if(mAllocated == allocated){
//            return;
//        }
//        mAllocated = allocated;
//        emit allocatedChanged();
//    }

//signals:
//    void fullnameChanged();
//    void rankChanged();
//    void domainChanged();
//    int  ageChanged();
//    void genderChanged();
//    void allocatedChanged();
//    //void getdataChanged();
//private:
//    int mAge;
//    QString mFullname;
//    QString mDomain;
//    QString mGender;
//    QString mRank;
//    QString mAllocated;
//};



class ScreenBuilding: public QAbstractListModel{
    Q_OBJECT
    Q_PROPERTY(QString status READ status WRITE setStatus NOTIFY statusChanged)
    Q_PROPERTY(QString fullname READ fullname WRITE setfullname NOTIFY fullnameChanged)
    Q_PROPERTY(QString rank READ rank WRITE setrank NOTIFY rankChanged)
    Q_PROPERTY(QString domain READ domain WRITE setdomain NOTIFY domainChanged)
    Q_PROPERTY(QString age READ age WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString gender READ gender WRITE setgender NOTIFY genderChanged)
    Q_PROPERTY(QString allocated READ allocated WRITE setallocated NOTIFY allocatedChanged)
public:
////khai bao qobject:qabstractlistmodel/////
    explicit ScreenBuilding(QObject *parent = nullptr):QAbstractListModel(parent){
               //  pTodoList.append(TodoItem("fullname",true));
    }
//    ~ScreenBuilding();
    Q_INVOKABLE void getTodoItem(const QString &fullname,const QString &rank,const QString &domain,const QString &age,const QString &gender,const QString &allocated, QObject *parent = nullptr){
           mFullname = fullname;
           mDomain = domain;
           mGender = gender;
           mRank = rank;
           mAge = age;
           mAllocated = allocated;
       }
   ////get set data///
       QString fullname() const{
           return mFullname;
       }

       void setfullname(const QString &fullname){
           if(mFullname == fullname){
               return;
           }
           mFullname = fullname;
           emit fullnameChanged();
       }

       QString rank() const{
           return mRank;
       }
       void setrank(const QString &rank){
           if(mRank == rank){
               return ;
           }
           mRank = rank;
           emit rankChanged();
       }
       QString domain() const{
           return mDomain;
       }
       void setdomain(const QString &domain){
           if(mDomain == domain){
               return ;
           }
           mDomain = domain;
           emit domainChanged();
       }
       QString age() const{
           return mAge;
       }
       void setAge(const QString &age){
           if( mAge == age){
               return ;
           }
           mAge = age;
           emit ageChanged();
       }
       QString gender() const{
           return mGender;
       }
       void setgender(const QString &gender){
           if(mGender == gender){
               return ;
           }
           mGender = gender;
           emit genderChanged();
       }
       QString allocated() const{
           return mAllocated;
       }
       void setallocated(const QString &allocated){
           if(mAllocated == allocated){
               return;
           }
           mAllocated = allocated;
           emit allocatedChanged();
       }
/////tạo enum role////
    enum TodoItemRoles{
        fullnameRole = Qt::UserRole +1,
        rankRole,
        domainRole,
        ageRole,
        genderRole,
        allocatedRole
    };
///override rowcount////
    int rowCount(const QModelIndex &parent = QModelIndex())const override{
///return độ dài todolist////
        return mgetTodoItem.length();
    }

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole)const override {
        if(!index.isValid()){
            return QVariant();
        }

        ////lấy item ra trước///
        const ScreenBuilding &item = mgetTodoItem[index.row()];
        switch(role){
        case fullnameRole:
            return item.fullname();
        case rankRole:
            return item.rank();
        case domainRole:
            return item.domain();
        case ageRole:
            return item.age();
        case genderRole:
            return item.gender();
        case allocatedRole:
            return item.allocated();
        default:
            return QVariant();
        }

    }


///đe phía qml thấy dc các fullnamerole,rank role phải override hàm rollnames///
protected:
    QHash<int,QByteArray>roleNames()const override{
        QHash<int,QByteArray> roles;
        roles[fullnameRole] = "fullname";
        roles[rankRole] = "rank";
        roles[domainRole] = "domain";
        roles[ageRole] = "age";
        roles[genderRole] = "gender";
        roles[allocatedRole] = "allocated";
        return roles;
    }

    /////////////*****///////////////////////////
    Q_INVOKABLE void login(QString const &userName, QString &password){
        if(userName == "a" && password == "a"){
            emit loginSuccess();
        }else{
            setStatus("Username/Password is not correct");
            emit loginFail();
        }
    }

    void setStatus(QString const &status){
        if(mStatus == status){
            return;
        }
        mStatus = status;
        emit statusChanged();
    }

    QString status()const{
        return mStatus;
    }

//    bool setData(const QModelIndex &index,const QVariant &value, int role = Qt::EditRole) override {
//        if(!index.isValid()){
//            return false;
//        }

//        TodoItem &item = pTodoList[index.row()];
//        switch(role){
//        case fullnameRole:
//            return item.setfullname(value.toString());
//        case rankRole:
//            return item.setrank(value.toString());
//        case domainRole:
//            return item.setdomain(value.toString());
//        case ageRole:
//            return item.setAge(value.toInt());
//        case genderRole:
//            return item.setgender(value.toString());
//        case allocatedRole:
//            return item.setallocated(value.toString());
//        default:
//            return false;
//        }
//    }
signals:
    void loginSuccess();
    void loginFail();
    void statusChanged();
    void fullnameChanged();
    void rankChanged();
    void domainChanged();
    void ageChanged();
    void genderChanged();
    void allocatedChanged();
private:
    QString mStatus;
    QString mAge;
    QString mFullname;
    QString mDomain;
    QString mGender;
    QString mRank;
    QString mAllocated;
    QList<ScreenBuilding> mgetTodoItem;
//   QList<TodoItem> pTodoList;
};
#endif // SCREENBUILDING_H
