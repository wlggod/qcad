// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAGRAPHICSVIEW_H
        #define RECMAGRAPHICSVIEW_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RGraphicsView.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaGraphicsView {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        setViewportNumber
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewportNumber
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearCaches
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDisplayOnlyCurrentUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScene
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScene
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocumentInterface
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapFromView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapToView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapDistanceFromView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapDistanceToView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapCornersFromView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinimum
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaximum
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleTerminateEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleKeyPressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleKeyReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        simulateMouseMoveEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleMouseMoveEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleMousePressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleMouseReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleMouseDoubleClickEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleWheelEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleTabletEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleSwipeGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handlePanGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handlePinchGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        viewportChangeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        saveViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        restoreViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomIn
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomOut
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomPrevious
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        autoZoom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomToSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        centerToPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        centerToBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        pan
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        startPan
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        regenerate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        repaintView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNavigationAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGridVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isGridVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintGridPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintGridLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBackgroundColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBackgroundColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMargin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMargin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPrinting
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPrinting
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPrintPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPrintPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPrintPointSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setColorMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColorMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setHairlineMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHairlineMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextLabels
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearTextLabels
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addTextLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastKnownMousePosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentStepScaleFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentStepScaleFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentStepOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentStepOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTextHeightThresholdOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextHeightThresholdOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTextHeightThreshold
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPathVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAntialiasing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAntialiasing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RGraphicsView* getSelf(const QString& fName, QScriptContext* context)
    ;static RGraphicsView* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumColorMode(QScriptEngine* engine, const RGraphicsView::ColorMode& value)
    ;static  void fromScriptValueEnumColorMode(const QScriptValue& value, RGraphicsView::ColorMode& out)
    ;};
    #endif
    