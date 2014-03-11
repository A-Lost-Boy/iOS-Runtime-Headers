/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, GEOMapRegion, NSData;

@interface GEORPMapLocation : PBCodable <NSCopying> {
    struct { 
        unsigned int zoomLevel : 1; 
    GEOLatLng *_coordinate;
    } _has;
    NSData *_image;
    GEOMapRegion *_mapRegion;
    float _zoomLevel;
}

@property(retain) GEOLatLng * coordinate;
@property(readonly) BOOL hasCoordinate;
@property(readonly) BOOL hasImage;
@property(readonly) BOOL hasMapRegion;
@property BOOL hasZoomLevel;
@property(retain) NSData * image;
@property(retain) GEOMapRegion * mapRegion;
@property float zoomLevel;

- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCoordinate;
- (BOOL)hasImage;
- (BOOL)hasMapRegion;
- (BOOL)hasZoomLevel;
- (unsigned int)hash;
- (id)image;
- (BOOL)isEqual:(id)arg1;
- (id)mapRegion;
- (BOOL)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasZoomLevel:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setZoomLevel:(float)arg1;
- (void)writeTo:(id)arg1;
- (float)zoomLevel;

@end