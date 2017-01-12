/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying> {
    int  _enumValue;
    struct { 
        unsigned int enumValue : 1; 
    }  _has;
    GEOFormattedString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int enumValue;
@property (nonatomic, readonly) <GEOServerFormattedString> *formattedName;
@property (nonatomic) BOOL hasEnumValue;
@property (nonatomic, readonly) BOOL hasName;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) GEOFormattedString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)enumValue;
- (id)formattedName;
- (BOOL)hasEnumValue;
- (BOOL)hasName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setEnumValue:(int)arg1;
- (void)setHasEnumValue:(BOOL)arg1;
- (void)setName:(id)arg1;
- (int)value;
- (void)writeTo:(id)arg1;

@end