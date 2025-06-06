/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#ifndef RLEADERENTITY_H
#define RLEADERENTITY_H

#include "entity_global.h"

#include "REntity.h"
#include "RLeaderData.h"

class RDocument;
class RExporter;

/**
 * Leader entity class.
 *
 * \scriptable
 * \sharedPointerSupport
 * \ingroup entity
 */
class QCADENTITY_EXPORT RLeaderEntity: public REntity {
    Q_DECLARE_TR_FUNCTIONS(RLeaderEntity)

public:
    static RPropertyTypeId PropertyCustom;
    static RPropertyTypeId PropertyHandle;
    static RPropertyTypeId PropertyProtected;
    static RPropertyTypeId PropertyWorkingSet;
    static RPropertyTypeId PropertyType;
    static RPropertyTypeId PropertyBlock;
    static RPropertyTypeId PropertyLayer;
    static RPropertyTypeId PropertyLinetype;
    static RPropertyTypeId PropertyLinetypeScale;
    static RPropertyTypeId PropertyLineweight;
    static RPropertyTypeId PropertyColor;
    static RPropertyTypeId PropertyDisplayedColor;
    static RPropertyTypeId PropertyDrawOrder;

    static RPropertyTypeId PropertyArrowHead;
    static RPropertyTypeId PropertySplineShaped;
    static RPropertyTypeId PropertyDimLeaderBlock;
    static RPropertyTypeId PropertyVertexNX;
    static RPropertyTypeId PropertyVertexNY;
    static RPropertyTypeId PropertyVertexNZ;

    static RPropertyTypeId PropertyDimscale;
    static RPropertyTypeId PropertyDimasz;

    static RPropertyTypeId PropertyLength;
    static RPropertyTypeId PropertyTotalLength;

public:
    RLeaderEntity(RDocument* document, const RLeaderData& data);
    RLeaderEntity(const RLeaderEntity& other);
    virtual ~RLeaderEntity();

    static void init();

    static RS::EntityType getRtti() {
        return RS::EntityLeader;
    }

    static QSet<RPropertyTypeId> getStaticPropertyTypeIds() {
        return RPropertyTypeId::getPropertyTypeIds(RLeaderEntity::getRtti());
    }

    virtual QSharedPointer<RObject> clone() const {
        return QSharedPointer<RObject>(new RLeaderEntity(*this));
    }

    QSharedPointer<RLeaderEntity> cloneToLeaderEntity() const {
        return QSharedPointer<RLeaderEntity>(new RLeaderEntity(*this));
    }

    virtual bool setProperty(RPropertyTypeId propertyTypeId, const QVariant& value,
        RTransaction* transaction=NULL);
    virtual QPair<QVariant, RPropertyAttributes> getProperty(
            RPropertyTypeId& propertyTypeId,
            bool humanReadable = false, bool noAttributes = false, bool showOnRequest = false);

    virtual RLeaderData& getData() {
        return data;
    }

    void setData(RLeaderData& d) {
        data = d;
    }

    virtual const RLeaderData& getData() const {
        return data;
    }

    int getClosestSegment(const RVector& point) const {
        return data.getClosestSegment(point);
    }

    bool reverse() {
        return data.reverse();
    }

    void setArrowHead(bool on) {
        data.setArrowHead(on);
    }

    bool hasArrowHead() const {
        return data.hasArrowHead();
    }

    void setSplineShaped(bool on) {
        data.setSplineShaped(on);
    }

    bool isSplineShaped() const {
        return data.isSplineShaped();
    }

    void clear() {
        data.clear();
    }

    void normalize() {
        data.normalize();
    }

    int countVertices() const {
        return data.countVertices();
    }

    void appendVertex(const RVector& vertex, double bulge=0.0) {
        Q_UNUSED(bulge);
        data.appendVertex(vertex);
    }

    void prependVertex(const RVector& vertex, double bulge=0.0) {
        Q_UNUSED(bulge);
        data.prependVertex(vertex);
    }

    void insertVertex(int index, const RVector& vertex) {
        data.insertVertex(index, vertex);
    }

    void insertVertexAt(const RVector& vertex) {
        data.insertVertexAt(vertex);
    }

    RVector getVertexAt(int i) const {
        return data.getVertexAt(i);
    }

    void setVertexAt(int i, const RVector& v) {
        data.setVertexAt(i, v);
    }

    void removeLastVertex() {
        data.removeLastVertex();
    }

    void removeVertex(int index) {
        data.removeVertex(index);
    }

    int countSegments() const {
        return data.countSegments();
    }

    QSharedPointer<RShape> getSegmentAt(int i) const {
        return data.getSegmentAt(i);
    }

    double getBulgeAt(int i) const {
        return data.getBulgeAt(i);
    }

    void setBulgeAt(int i, double b) {
        data.setBulgeAt(i, b);
    }

    double getDirection1() const {
        return data.getDirection1();
    }

    double getDirection2() const {
        return data.getDirection2();
    }

    RVector getEndPoint() const {
        return data.getEndPoint();
    }

    RVector getStartPoint() const {
        return data.getStartPoint();
    }

    void setClosed(bool on) {
        data.setClosed(on);
    }

    bool isClosed() const {
        return data.isClosed();
    }

    double getDimscale() const {
        return data.getDimscale();
    }

    void setDimscale(double v) {
        data.setDimscale(v);
    }

    double getDimasz(bool scale=true) const {
        return data.getDimasz(scale);
    }

    void setDimasz(double v) {
        data.setDimasz(v);
    }

    QList<QSharedPointer<RShape> > getExploded() const {
        return data.getExploded();
    }

    RObject::Id getDimLeaderBlockId() const {
        return data.getDimLeaderBlockId();
    }
    void setDimLeaderBlockId(RObject::Id id) {
        data.setDimLeaderBlockId(id);
    }

    void clearStyleOverrides() {
        data.clearStyleOverrides();
    }

    virtual void exportEntity(RExporter& e, bool preview=false, bool forceSelected=false) const;

protected:
    virtual void print(QDebug dbg) const;

protected:
    RLeaderData data;
};

Q_DECLARE_METATYPE(RLeaderEntity*)
Q_DECLARE_METATYPE(QSharedPointer<RLeaderEntity>)
Q_DECLARE_METATYPE(QSharedPointer<RLeaderEntity>*)

#endif
