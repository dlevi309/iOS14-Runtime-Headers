/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying> {

	NSMutableArray* _cachedAppPredictionPanelIds;
	NSMutableArray* _cachedAppPredictionPanelLayouts;
	NSMutableArray* _cachedStackIds;
	NSMutableArray* _cachedStackLayouts;
	NSMutableArray* _cachedSuggestionWidgetIds;
	NSMutableArray* _cachedSuggestionWidgetLayouts;
	NSMutableArray* _fallbackSuggestions;
	NSString* _uuidString;

}

@property (nonatomic,readonly) BOOL hasUuidString; 
@property (nonatomic,retain) NSString * uuidString;                                         //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedSuggestionWidgetIds;                    //@synthesize cachedSuggestionWidgetIds=_cachedSuggestionWidgetIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedSuggestionWidgetLayouts;                //@synthesize cachedSuggestionWidgetLayouts=_cachedSuggestionWidgetLayouts - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedStackIds;                               //@synthesize cachedStackIds=_cachedStackIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedStackLayouts;                           //@synthesize cachedStackLayouts=_cachedStackLayouts - In the implementation block
@property (nonatomic,retain) NSMutableArray * fallbackSuggestions;                          //@synthesize fallbackSuggestions=_fallbackSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedAppPredictionPanelIds;                  //@synthesize cachedAppPredictionPanelIds=_cachedAppPredictionPanelIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedAppPredictionPanelLayouts;              //@synthesize cachedAppPredictionPanelLayouts=_cachedAppPredictionPanelLayouts - In the implementation block
+(Class)cachedSuggestionWidgetIdsType;
+(Class)cachedSuggestionWidgetLayoutsType;
+(Class)cachedStackIdsType;
+(Class)cachedStackLayoutsType;
+(Class)fallbackSuggestionsType;
+(Class)cachedAppPredictionPanelIdsType;
+(Class)cachedAppPredictionPanelLayoutsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)cachedStackLayouts;
-(NSMutableArray *)fallbackSuggestions;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)uuidString;
-(id)description;
-(void)setUuidString:(NSString *)arg1 ;
-(BOOL)hasUuidString;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)cachedSuggestionWidgetLayouts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)cachedAppPredictionPanelLayouts;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)cachedSuggestionWidgetIds;
-(NSMutableArray *)cachedAppPredictionPanelIds;
-(NSMutableArray *)cachedStackIds;
-(void)setCachedSuggestionWidgetIds:(NSMutableArray *)arg1 ;
-(void)setCachedSuggestionWidgetLayouts:(NSMutableArray *)arg1 ;
-(void)setCachedStackIds:(NSMutableArray *)arg1 ;
-(void)setCachedStackLayouts:(NSMutableArray *)arg1 ;
-(void)setFallbackSuggestions:(NSMutableArray *)arg1 ;
-(void)setCachedAppPredictionPanelIds:(NSMutableArray *)arg1 ;
-(void)setCachedAppPredictionPanelLayouts:(NSMutableArray *)arg1 ;
-(void)addCachedSuggestionWidgetIds:(id)arg1 ;
-(void)addCachedSuggestionWidgetLayouts:(id)arg1 ;
-(void)addCachedStackIds:(id)arg1 ;
-(void)addCachedStackLayouts:(id)arg1 ;
-(void)addFallbackSuggestions:(id)arg1 ;
-(void)addCachedAppPredictionPanelIds:(id)arg1 ;
-(void)addCachedAppPredictionPanelLayouts:(id)arg1 ;
-(unsigned long long)cachedSuggestionWidgetIdsCount;
-(void)clearCachedSuggestionWidgetIds;
-(id)cachedSuggestionWidgetIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedSuggestionWidgetLayoutsCount;
-(void)clearCachedSuggestionWidgetLayouts;
-(id)cachedSuggestionWidgetLayoutsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedStackIdsCount;
-(void)clearCachedStackIds;
-(id)cachedStackIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedStackLayoutsCount;
-(void)clearCachedStackLayouts;
-(id)cachedStackLayoutsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fallbackSuggestionsCount;
-(void)clearFallbackSuggestions;
-(id)fallbackSuggestionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedAppPredictionPanelIdsCount;
-(void)clearCachedAppPredictionPanelIds;
-(id)cachedAppPredictionPanelIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedAppPredictionPanelLayoutsCount;
-(void)clearCachedAppPredictionPanelLayouts;
-(id)cachedAppPredictionPanelLayoutsAtIndex:(unsigned long long)arg1 ;
@end

