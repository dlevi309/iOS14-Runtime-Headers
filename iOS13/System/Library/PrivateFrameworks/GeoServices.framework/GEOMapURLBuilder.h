/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary, GEOURLCollectionStorage, GEOURLExtraStorage, GEOMuninViewState;

@interface GEOMapURLBuilder : NSObject {

	NSMutableDictionary* _dict;
	GEOURLCollectionStorage* _collectionStorage;
	GEOURLExtraStorage* _extraStorage;
	GEOMuninViewState* _muninViewState;

}

@property (nonatomic,retain) GEOURLCollectionStorage * collectionStorage;              //@synthesize collectionStorage=_collectionStorage - In the implementation block
@property (nonatomic,retain) GEOURLExtraStorage * extraStorage;                        //@synthesize extraStorage=_extraStorage - In the implementation block
@property (nonatomic,retain) GEOMuninViewState * muninViewState;                       //@synthesize muninViewState=_muninViewState - In the implementation block
+(id)URLForAddress:(id)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(SCD_Struct_GE32)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(SCD_Struct_GE32)arg1 address:(id)arg2 label:(id)arg3 ;
+(id)URLForCoordinate:(SCD_Struct_GE32)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 useWebPlaceCard:(BOOL)arg5 muninViewState:(id)arg6 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(int)arg3 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 transport:(int)arg2 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(SCD_Struct_GE32)arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(BOOL)arg7 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(SCD_Struct_GE32)arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(BOOL)arg7 muninViewState:(id)arg8 ;
+(id)URLForSearch:(id)arg1 ;
+(id)URLForSearch:(id)arg1 near:(SCD_Struct_GE32)arg2 ;
+(id)URLForSearch:(id)arg1 at:(SCD_Struct_GE32)arg2 span:(SCD_Struct_GE32)arg3 ;
+(id)URLForSearch:(id)arg1 at:(SCD_Struct_GE32)arg2 zoomLevel:(double)arg3 ;
+(id)URLForAddress:(id)arg1 ;
+(id)URLForCoordinate:(SCD_Struct_GE32)arg1 ;
+(id)URLForCoordinate:(SCD_Struct_GE32)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 ;
+(id)URLForCoordinate:(SCD_Struct_GE32)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 useWebPlaceCard:(BOOL)arg5 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 label:(id)arg2 muid:(unsigned long long)arg3 provider:(int)arg4 transport:(int)arg5 ;
+(id)URLForCameraAt:(SCD_Struct_GE32)arg1 altitude:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 roll:(double)arg5 ;
+(id)URLForCameraAt:(SCD_Struct_GE32)arg1 zoomLevel:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 roll:(double)arg5 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(SCD_Struct_GE32)arg4 address:(id)arg5 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(SCD_Struct_GE32)arg4 address:(id)arg5 extraStorage:(id)arg6 ;
+(id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
+(id)URLForTransitLine:(unsigned long long)arg1 withName:(id)arg2 mapRegion:(id)arg3 ;
+(id)URLForShowFavoritesType:(long long)arg1 ;
+(id)URLForCollectionStorage:(id)arg1 ;
-(id)build;
-(void)setMapRegion:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)setDisplayRegion:(SCD_Struct_GE40)arg1 ;
-(GEOURLCollectionStorage *)collectionStorage;
-(GEOURLExtraStorage *)extraStorage;
-(GEOMuninViewState *)muninViewState;
-(void)_removeParametersAllBut:(id)arg1 ;
-(id)_stringForCoordinate2DPointer:(SCD_Struct_GE32*)arg1 ;
-(id)_stringForCoordinateSpanPointer:(SCD_Struct_GE32*)arg1 ;
-(id)initForSearch:(id)arg1 ;
-(id)buildForWeb;
-(void)setNear:(SCD_Struct_GE32)arg1 ;
-(void)setSearchLocation:(SCD_Struct_GE32)arg1 span:(SCD_Struct_GE32)arg2 ;
-(void)setSearchLocation:(SCD_Struct_GE32)arg1 zoomLevel:(double)arg2 ;
-(id)initForAddress:(id)arg1 label:(id)arg2 ;
-(id)initForCoordinate:(SCD_Struct_GE32)arg1 address:(id)arg2 label:(id)arg3 ;
-(void)setExtraStorage:(GEOURLExtraStorage *)arg1 ;
-(void)setMuninViewState:(GEOMuninViewState *)arg1 ;
-(id)buildForWebPlaceCard;
-(id)initForDirectionsTo:(id)arg1 ;
-(void)setStartAddress:(id)arg1 ;
-(void)setDestinationLabel:(id)arg1 ;
-(void)setDestinationMUID:(unsigned long long)arg1 provider:(int)arg2 ;
-(id)initForCameraAt:(SCD_Struct_GE32)arg1 altitude:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 roll:(double)arg5 ;
-(id)initForCameraAt:(SCD_Struct_GE32)arg1 zoomLevel:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 roll:(double)arg5 ;
-(id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
-(void)setBusinessCoordinate:(SCD_Struct_GE32)arg1 ;
-(void)setBusinessAddress:(id)arg1 ;
-(id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
-(id)initForTransitLine:(unsigned long long)arg1 withName:(id)arg2 mapRegion:(id)arg3 ;
-(id)initForShowFavoritesType:(long long)arg1 ;
-(void)setCollectionStorage:(GEOURLCollectionStorage *)arg1 ;
-(id)initForCollectionStorage:(id)arg1 ;
-(id)buildForCollections;
-(void)addCodable:(id)arg1 key:(id)arg2 compressedKey:(id)arg3 ;
-(id)initForCoordinate:(SCD_Struct_GE32)arg1 label:(id)arg2 ;
-(void)setContentProvider:(id)arg1 ;
@end
