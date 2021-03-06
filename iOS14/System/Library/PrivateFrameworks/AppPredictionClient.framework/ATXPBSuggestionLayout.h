/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ATXPBSuggestionLayout : PBCodable <NSCopying> {

	double _layoutScore;
	unsigned long long _numWidgetsInStack;
	NSMutableArray* _fourByFourSuggestions;
	int _layoutType;
	NSMutableArray* _oneByFourSuggestions;
	NSMutableArray* _oneByOneSuggestions;
	NSMutableArray* _oneByTwoSuggestions;
	NSMutableArray* _twoByFourSuggestions;
	NSMutableArray* _twoByTwoSuggestions;
	NSString* _uuidOfHighestConfidenceSuggestion;
	NSString* _uuidString;
	NSString* _widgetUniqueId;
	BOOL _confidenceWarrantsSnappingOrNPlusOne;
	BOOL _isLowConfidenceStackRotationForStaleStack;
	BOOL _isNPlusOne;
	BOOL _isValidForSuggestionsWidget;
	SCD_Struct_AT6 _has;

}

@property (assign,nonatomic) BOOL hasLayoutType; 
@property (assign,nonatomic) int layoutType;                                                 //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) BOOL hasLayoutScore; 
@property (assign,nonatomic) double layoutScore;                                             //@synthesize layoutScore=_layoutScore - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidString; 
@property (nonatomic,retain) NSString * uuidString;                                          //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,retain) NSMutableArray * oneByOneSuggestions;                           //@synthesize oneByOneSuggestions=_oneByOneSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableArray * oneByTwoSuggestions;                           //@synthesize oneByTwoSuggestions=_oneByTwoSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableArray * twoByTwoSuggestions;                           //@synthesize twoByTwoSuggestions=_twoByTwoSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableArray * oneByFourSuggestions;                          //@synthesize oneByFourSuggestions=_oneByFourSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableArray * twoByFourSuggestions;                          //@synthesize twoByFourSuggestions=_twoByFourSuggestions - In the implementation block
@property (assign,nonatomic) BOOL hasIsValidForSuggestionsWidget; 
@property (assign,nonatomic) BOOL isValidForSuggestionsWidget;                               //@synthesize isValidForSuggestionsWidget=_isValidForSuggestionsWidget - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceWarrantsSnappingOrNPlusOne; 
@property (assign,nonatomic) BOOL confidenceWarrantsSnappingOrNPlusOne;                      //@synthesize confidenceWarrantsSnappingOrNPlusOne=_confidenceWarrantsSnappingOrNPlusOne - In the implementation block
@property (assign,nonatomic) BOOL hasIsNPlusOne; 
@property (assign,nonatomic) BOOL isNPlusOne;                                                //@synthesize isNPlusOne=_isNPlusOne - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetUniqueId; 
@property (nonatomic,retain) NSString * widgetUniqueId;                                      //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
@property (assign,nonatomic) BOOL hasIsLowConfidenceStackRotationForStaleStack; 
@property (assign,nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;                 //@synthesize isLowConfidenceStackRotationForStaleStack=_isLowConfidenceStackRotationForStaleStack - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidOfHighestConfidenceSuggestion; 
@property (nonatomic,retain) NSString * uuidOfHighestConfidenceSuggestion;                   //@synthesize uuidOfHighestConfidenceSuggestion=_uuidOfHighestConfidenceSuggestion - In the implementation block
@property (assign,nonatomic) BOOL hasNumWidgetsInStack; 
@property (assign,nonatomic) unsigned long long numWidgetsInStack;                           //@synthesize numWidgetsInStack=_numWidgetsInStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * fourByFourSuggestions;                         //@synthesize fourByFourSuggestions=_fourByFourSuggestions - In the implementation block
+(Class)oneByOneSuggestionsType;
+(Class)oneByTwoSuggestionsType;
+(Class)twoByTwoSuggestionsType;
+(Class)oneByFourSuggestionsType;
+(Class)twoByFourSuggestionsType;
+(Class)fourByFourSuggestionsType;
-(id)dictionaryRepresentation;
-(int)layoutType;
-(NSMutableArray *)twoByTwoSuggestions;
-(void)setIsNPlusOne:(BOOL)arg1 ;
-(void)setNumWidgetsInStack:(unsigned long long)arg1 ;
-(void)setLayoutScore:(double)arg1 ;
-(BOOL)isNPlusOne;
-(void)setOneByTwoSuggestions:(NSMutableArray *)arg1 ;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(BOOL)confidenceWarrantsSnappingOrNPlusOne;
-(unsigned long long)numWidgetsInStack;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)uuidOfHighestConfidenceSuggestion;
-(void)setConfidenceWarrantsSnappingOrNPlusOne:(BOOL)arg1 ;
-(NSString *)uuidString;
-(void)setTwoByFourSuggestions:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setUuidString:(NSString *)arg1 ;
-(BOOL)hasUuidString;
-(void)setIsLowConfidenceStackRotationForStaleStack:(BOOL)arg1 ;
-(NSMutableArray *)twoByFourSuggestions;
-(void)setUuidOfHighestConfidenceSuggestion:(NSString *)arg1 ;
-(void)setLayoutType:(int)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)fourByFourSuggestions;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isValidForSuggestionsWidget;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOneByOneSuggestions:(NSMutableArray *)arg1 ;
-(void)setTwoByTwoSuggestions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)oneByTwoSuggestions;
-(BOOL)isLowConfidenceStackRotationForStaleStack;
-(double)layoutScore;
-(NSMutableArray *)oneByOneSuggestions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsValidForSuggestionsWidget:(BOOL)arg1 ;
-(NSMutableArray *)oneByFourSuggestions;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)widgetUniqueId;
-(void)setOneByFourSuggestions:(NSMutableArray *)arg1 ;
-(BOOL)hasUuidOfHighestConfidenceSuggestion;
-(void)setFourByFourSuggestions:(NSMutableArray *)arg1 ;
-(BOOL)hasWidgetUniqueId;
-(void)addOneByOneSuggestions:(id)arg1 ;
-(void)addOneByTwoSuggestions:(id)arg1 ;
-(void)addTwoByTwoSuggestions:(id)arg1 ;
-(void)addOneByFourSuggestions:(id)arg1 ;
-(void)addTwoByFourSuggestions:(id)arg1 ;
-(void)addFourByFourSuggestions:(id)arg1 ;
-(unsigned long long)oneByOneSuggestionsCount;
-(void)clearOneByOneSuggestions;
-(id)oneByOneSuggestionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)oneByTwoSuggestionsCount;
-(void)clearOneByTwoSuggestions;
-(id)oneByTwoSuggestionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)twoByTwoSuggestionsCount;
-(void)clearTwoByTwoSuggestions;
-(id)twoByTwoSuggestionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)oneByFourSuggestionsCount;
-(void)clearOneByFourSuggestions;
-(id)oneByFourSuggestionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)twoByFourSuggestionsCount;
-(void)clearTwoByFourSuggestions;
-(id)twoByFourSuggestionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fourByFourSuggestionsCount;
-(void)clearFourByFourSuggestions;
-(id)fourByFourSuggestionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasLayoutType:(BOOL)arg1 ;
-(BOOL)hasLayoutType;
-(id)layoutTypeAsString:(int)arg1 ;
-(int)StringAsLayoutType:(id)arg1 ;
-(void)setHasLayoutScore:(BOOL)arg1 ;
-(BOOL)hasLayoutScore;
-(void)setHasIsValidForSuggestionsWidget:(BOOL)arg1 ;
-(BOOL)hasIsValidForSuggestionsWidget;
-(void)setHasConfidenceWarrantsSnappingOrNPlusOne:(BOOL)arg1 ;
-(BOOL)hasConfidenceWarrantsSnappingOrNPlusOne;
-(void)setHasIsNPlusOne:(BOOL)arg1 ;
-(BOOL)hasIsNPlusOne;
-(void)setHasIsLowConfidenceStackRotationForStaleStack:(BOOL)arg1 ;
-(BOOL)hasIsLowConfidenceStackRotationForStaleStack;
-(void)setHasNumWidgetsInStack:(BOOL)arg1 ;
-(BOOL)hasNumWidgetsInStack;
@end

