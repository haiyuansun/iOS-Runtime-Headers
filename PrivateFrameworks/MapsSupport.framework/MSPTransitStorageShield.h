/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    struct { 
        unsigned int shieldType : 1; 
    }  _has;
    NSString * _shieldColorString;
    NSString * _shieldText;
    long long  _shieldType;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasShieldColorString;
@property (nonatomic, readonly) BOOL hasShieldText;
@property (nonatomic) BOOL hasShieldType;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, retain) NSString *shieldColorString;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, retain) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (nonatomic) long long shieldType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasShieldColorString;
- (BOOL)hasShieldText;
- (BOOL)hasShieldType;
- (unsigned int)hash;
- (id)initWithShield:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasShieldType:(BOOL)arg1;
- (void)setShieldColorString:(id)arg1;
- (void)setShieldText:(id)arg1;
- (void)setShieldType:(long long)arg1;
- (id)shieldColorString;
- (id)shieldText;
- (long long)shieldType;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
