/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDResolvedItem, GEOPDRelatedSearchSuggestion, GEOPDDirectionIntent, NSMutableArray, GEOMapRegion, NSString, GEOPDSearchClientBehavior;

@interface GEOPDSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDResolvedItem* _clientResolvedResult;
	GEOPDRelatedSearchSuggestion* _defaultRelatedSearchSuggestion;
	GEOPDDirectionIntent* _directionIntent;
	NSMutableArray* _disambiguationLabels;
	NSMutableArray* _displayHeaderSubstitutes;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _relatedEntitySections;
	NSMutableArray* _relatedSearchSuggestions;
	NSMutableArray* _resultDetourInfos;
	NSString* _resultDisplayHeader;
	NSMutableArray* _retainSearchs;
	GEOPDSearchClientBehavior* _searchClientBehavior;
	NSMutableArray* _searchResultSections;
	NSMutableArray* _searchTierMetadatas;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dymSuggestionVisibleTime;
	unsigned _retainSearchTime;
	int _searchResultType;
	BOOL _enablePartialClientization;
	BOOL _isChainResultSet;
	BOOL _showDymSuggestionCloseButton;
	struct {
		unsigned has_dymSuggestionVisibleTime : 1;
		unsigned has_retainSearchTime : 1;
		unsigned has_searchResultType : 1;
		unsigned has_enablePartialClientization : 1;
		unsigned has_isChainResultSet : 1;
		unsigned has_showDymSuggestionCloseButton : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clientResolvedResult : 1;
		unsigned read_defaultRelatedSearchSuggestion : 1;
		unsigned read_directionIntent : 1;
		unsigned read_disambiguationLabels : 1;
		unsigned read_displayHeaderSubstitutes : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_relatedEntitySections : 1;
		unsigned read_relatedSearchSuggestions : 1;
		unsigned read_resultDetourInfos : 1;
		unsigned read_resultDisplayHeader : 1;
		unsigned read_retainSearchs : 1;
		unsigned read_searchClientBehavior : 1;
		unsigned read_searchResultSections : 1;
		unsigned read_searchTierMetadatas : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (nonatomic,retain) NSMutableArray * disambiguationLabels; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,retain) NSMutableArray * relatedSearchSuggestions; 
@property (assign,nonatomic) BOOL hasSearchResultType; 
@property (assign,nonatomic) int searchResultType; 
@property (nonatomic,readonly) BOOL hasResultDisplayHeader; 
@property (nonatomic,retain) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) BOOL hasDefaultRelatedSearchSuggestion; 
@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * defaultRelatedSearchSuggestion; 
@property (nonatomic,readonly) BOOL hasSearchClientBehavior; 
@property (nonatomic,retain) GEOPDSearchClientBehavior * searchClientBehavior; 
@property (nonatomic,retain) NSMutableArray * resultDetourInfos; 
@property (nonatomic,readonly) BOOL hasDirectionIntent; 
@property (nonatomic,retain) GEOPDDirectionIntent * directionIntent; 
@property (nonatomic,readonly) BOOL hasClientResolvedResult; 
@property (nonatomic,retain) GEOPDResolvedItem * clientResolvedResult; 
@property (nonatomic,retain) NSMutableArray * displayHeaderSubstitutes; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (assign,nonatomic) BOOL hasDymSuggestionVisibleTime; 
@property (assign,nonatomic) unsigned dymSuggestionVisibleTime; 
@property (assign,nonatomic) BOOL hasShowDymSuggestionCloseButton; 
@property (assign,nonatomic) BOOL showDymSuggestionCloseButton; 
@property (assign,nonatomic) BOOL hasRetainSearchTime; 
@property (assign,nonatomic) unsigned retainSearchTime; 
@property (nonatomic,retain) NSMutableArray * retainSearchs; 
@property (nonatomic,retain) NSMutableArray * searchResultSections; 
@property (nonatomic,retain) NSMutableArray * relatedEntitySections; 
@property (nonatomic,retain) NSMutableArray * searchTierMetadatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)disambiguationLabelType;
+(Class)resultDetourInfoType;
+(Class)relatedSearchSuggestionType;
+(Class)relatedEntitySectionType;
+(Class)searchTierMetadataType;
+(BOOL)isValid:(id)arg1 ;
+(Class)retainSearchType;
+(Class)displayHeaderSubstituteType;
+(Class)searchResultSectionType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(BOOL)isChainResultSet;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(int)searchResultType;
-(GEOMapRegion *)displayMapRegion;
-(GEOPDDirectionIntent *)directionIntent;
-(GEOPDResolvedItem *)clientResolvedResult;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)relatedSearchSuggestions;
-(id)initWithData:(id)arg1 ;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIsChainResultSet;
-(NSMutableArray *)searchResultSections;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(void)clearDisambiguationLabels;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)displayHeaderSubstitutes;
-(NSMutableArray *)disambiguationLabels;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setRetainSearchTime:(unsigned)arg1 ;
-(unsigned)dymSuggestionVisibleTime;
-(unsigned)retainSearchTime;
-(void)setHasRetainSearchTime:(BOOL)arg1 ;
-(BOOL)hasRetainSearchTime;
-(NSString *)resultDisplayHeader;
-(GEOPDRelatedSearchSuggestion *)defaultRelatedSearchSuggestion;
-(GEOPDSearchClientBehavior *)searchClientBehavior;
-(void)addRelatedSearchSuggestion:(id)arg1 ;
-(void)addResultDetourInfo:(id)arg1 ;
-(void)setDefaultRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(void)setSearchClientBehavior:(GEOPDSearchClientBehavior *)arg1 ;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(void)addRelatedEntitySection:(id)arg1 ;
-(void)addSearchTierMetadata:(id)arg1 ;
-(unsigned long long)relatedSearchSuggestionsCount;
-(void)clearRelatedSearchSuggestions;
-(unsigned long long)resultDetourInfosCount;
-(id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1 ;
-(void)clearResultDetourInfos;
-(id)resultDetourInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)relatedEntitySectionsCount;
-(void)clearRelatedEntitySections;
-(id)relatedEntitySectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchTierMetadatasCount;
-(void)clearSearchTierMetadatas;
-(id)searchTierMetadataAtIndex:(unsigned long long)arg1 ;
-(void)setRelatedSearchSuggestions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)resultDetourInfos;
-(void)setResultDetourInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasDefaultRelatedSearchSuggestion;
-(BOOL)hasSearchClientBehavior;
-(BOOL)enablePartialClientization;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(void)setRelatedEntitySections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchTierMetadatas;
-(void)setSearchTierMetadatas:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)relatedEntitySections;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)showDymSuggestionCloseButton;
-(void)setSearchResultType:(int)arg1 ;
-(void)setResultDisplayHeader:(NSString *)arg1 ;
-(void)setDirectionIntent:(GEOPDDirectionIntent *)arg1 ;
-(void)addRetainSearch:(id)arg1 ;
-(void)setClientResolvedResult:(GEOPDResolvedItem *)arg1 ;
-(void)addDisplayHeaderSubstitute:(id)arg1 ;
-(void)setDymSuggestionVisibleTime:(unsigned)arg1 ;
-(void)setShowDymSuggestionCloseButton:(BOOL)arg1 ;
-(void)addSearchResultSection:(id)arg1 ;
-(unsigned long long)displayHeaderSubstitutesCount;
-(void)clearDisplayHeaderSubstitutes;
-(id)displayHeaderSubstituteAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)retainSearchsCount;
-(void)clearRetainSearchs;
-(id)retainSearchAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchResultSectionsCount;
-(void)clearSearchResultSections;
-(id)searchResultSectionAtIndex:(unsigned long long)arg1 ;
-(void)setHasSearchResultType:(BOOL)arg1 ;
-(BOOL)hasSearchResultType;
-(BOOL)hasDirectionIntent;
-(id)searchResultTypeAsString:(int)arg1 ;
-(int)StringAsSearchResultType:(id)arg1 ;
-(BOOL)hasResultDisplayHeader;
-(BOOL)hasClientResolvedResult;
-(void)setDisplayHeaderSubstitutes:(NSMutableArray *)arg1 ;
-(void)setHasDymSuggestionVisibleTime:(BOOL)arg1 ;
-(BOOL)hasDymSuggestionVisibleTime;
-(void)setHasShowDymSuggestionCloseButton:(BOOL)arg1 ;
-(NSMutableArray *)retainSearchs;
-(BOOL)hasShowDymSuggestionCloseButton;
-(void)setRetainSearchs:(NSMutableArray *)arg1 ;
-(void)setSearchResultSections:(NSMutableArray *)arg1 ;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
