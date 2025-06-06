// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaFontChooserWidget.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QLabel>
            
            
        // includes for base ecma wrapper classes
         void REcmaFontChooserWidget::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RFontChooserWidget*) 0)));
        protoCreated = true;
    }

    
        // primary base class QWidget:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QWidget*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QWidget
        REcmaHelper::registerFunction(&engine, proto, getQWidget, "getQWidget");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getChosenFont, "getChosenFont");
            
            REcmaHelper::registerFunction(&engine, proto, setChosenFont, "setChosenFont");
            
            REcmaHelper::registerFunction(&engine, proto, getSize, "getSize");
            
            REcmaHelper::registerFunction(&engine, proto, setSize, "setSize");
            
            REcmaHelper::registerFunction(&engine, proto, getLabel, "getLabel");
            
            REcmaHelper::registerFunction(&engine, proto, setLabel, "setLabel");
            
            REcmaHelper::registerFunction(&engine, proto, chosenFontChanged, "chosenFontChanged");
            
            REcmaHelper::registerFunction(&engine, proto, sizeChanged, "sizeChanged");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RFontChooserWidget*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RFontChooserWidget*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RFontChooserWidget",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaFontChooserWidget::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFontChooserWidget(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RFontChooserWidget
                    * cppResult =
                    new
                    RFontChooserWidget
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RFontChooserWidget
                    * cppResult =
                    new
                    RFontChooserWidget
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFontChooserWidget(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaFontChooserWidget::getQWidget(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QWidget* cppResult =
                    qscriptvalue_cast<RFontChooserWidget*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaFontChooserWidget::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RFontChooserWidget"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaFontChooserWidget::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QWidget");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaFontChooserWidget::getChosenFont
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFontChooserWidget::getChosenFont", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontChooserWidget::getChosenFont";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontChooserWidget* self = 
                        getSelf("getChosenFont", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QFont'
    QFont cppResult =
        
               self->getChosenFont();
        // return type: QFont
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontChooserWidget.getChosenFont().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFontChooserWidget::getChosenFont", context, engine);
            return result;
        }
         QScriptValue
        REcmaFontChooserWidget::setChosenFont
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFontChooserWidget::setChosenFont", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontChooserWidget::setChosenFont";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontChooserWidget* self = 
                        getSelf("setChosenFont", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QFont */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    QFont*
                    ap0 =
                    qscriptvalue_cast<
                    QFont*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){

                           return REcmaHelper::throwError("RFontChooserWidget: Argument 0 is not of type QFont* or QSharedPointer<QFont>.",
                               context);
                    }
                    QFont& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setChosenFont(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontChooserWidget.setChosenFont().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFontChooserWidget::setChosenFont", context, engine);
            return result;
        }
         QScriptValue
        REcmaFontChooserWidget::getSize
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFontChooserWidget::getSize", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontChooserWidget::getSize";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontChooserWidget* self = 
                        getSelf("getSize", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        
               self->getSize();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontChooserWidget.getSize().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFontChooserWidget::getSize", context, engine);
            return result;
        }
         QScriptValue
        REcmaFontChooserWidget::setSize
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFontChooserWidget::setSize", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontChooserWidget::setSize";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontChooserWidget* self = 
                        getSelf("setSize", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setSize(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontChooserWidget.setSize().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFontChooserWidget::setSize", context, engine);
            return result;
        }
         QScriptValue
        REcmaFontChooserWidget::getLabel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFontChooserWidget::getLabel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontChooserWidget::getLabel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontChooserWidget* self = 
                        getSelf("getLabel", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getLabel();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontChooserWidget.getLabel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFontChooserWidget::getLabel", context, engine);
            return result;
        }
         QScriptValue
        REcmaFontChooserWidget::setLabel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFontChooserWidget::setLabel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontChooserWidget::setLabel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontChooserWidget* self = 
                        getSelf("setLabel", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setLabel(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontChooserWidget.setLabel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFontChooserWidget::setLabel", context, engine);
            return result;
        }
         QScriptValue
        REcmaFontChooserWidget::chosenFontChanged
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFontChooserWidget::chosenFontChanged", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontChooserWidget::chosenFontChanged";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontChooserWidget* self = 
                        getSelf("chosenFontChanged", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QFont */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    QFont*
                    ap0 =
                    qscriptvalue_cast<
                    QFont*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){

                           return REcmaHelper::throwError("RFontChooserWidget: Argument 0 is not of type QFont* or QSharedPointer<QFont>.",
                               context);
                    }
                    QFont& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->chosenFontChanged(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontChooserWidget.chosenFontChanged().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFontChooserWidget::chosenFontChanged", context, engine);
            return result;
        }
         QScriptValue
        REcmaFontChooserWidget::sizeChanged
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFontChooserWidget::sizeChanged", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontChooserWidget::sizeChanged";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontChooserWidget* self = 
                        getSelf("sizeChanged", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->sizeChanged(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontChooserWidget.sizeChanged().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFontChooserWidget::sizeChanged", context, engine);
            return result;
        }
         QScriptValue REcmaFontChooserWidget::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RFontChooserWidget* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RFontChooserWidget(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaFontChooserWidget::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RFontChooserWidget* self = getSelf("RFontChooserWidget", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RFontChooserWidget* REcmaFontChooserWidget::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFontChooserWidget* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFontChooserWidget >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFontChooserWidget.%1(): "
                        "This object is not a RFontChooserWidget").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RFontChooserWidget* REcmaFontChooserWidget::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFontChooserWidget* selfBase = getSelf(fName, context);
                RFontChooserWidget* self = dynamic_cast<RFontChooserWidget*>(selfBase);
                //return REcmaHelper::scriptValueTo<RFontChooserWidget >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFontChooserWidget.%1(): "
                    "This object is not a RFontChooserWidget").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RFontChooserWidget*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RFontChooserWidget*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RFontChooserWidget*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    