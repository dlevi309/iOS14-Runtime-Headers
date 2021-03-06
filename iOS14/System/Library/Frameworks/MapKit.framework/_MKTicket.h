/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapServiceTicket.h>

@protocol GEOMapServiceTicket;
@class GEOMapServiceTraits, NSArray, GEOMapRegion, GEORelatedSearchSuggestion, NSString, NSError, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection;

@interface _MKTicket : NSObject <MKMapServiceTicket> {

	id<GEOMapServiceTicket> _ticket;
	NSArray* _exactMapItems;
	NSArray* _refinedMapItems;
	NSError* _error;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSArray * exactMapItems; 
@property (nonatomic,readonly) NSArray * refinedMapItems; 
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions; 
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion; 
@property (nonatomic,readonly) NSArray * browseCategories; 
@property (nonatomic,readonly) int searchResultType; 
@property (nonatomic,readonly) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) NSArray * displayHeaderSubstitutes; 
@property (nonatomic,readonly) BOOL shouldEnableRedoSearch; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolvedResult; 
@property (nonatomic,readonly) NSArray * retainedSearchMetadata; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,readonly) unsigned dymSuggestionVisibleTime; 
@property (nonatomic,readonly) BOOL showDymSuggestionCloseButton; 
@property (nonatomic,readonly) double requestResponseTime; 
@property (nonatomic,readonly) NSString * sectionHeader; 
@property (nonatomic,readonly) NSArray * searchResultSections; 
@property (nonatomic,readonly) GEOCategorySearchResultSection * categorySearchResultSection; 
@property (nonatomic,readonly) NSArray * relatedEntitySections; 
@property (nonatomic,readonly) NSArray * collectionResults; 
@property (nonatomic,readonly) NSArray * publisherResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyToCorrectedSearch:(id)arg1 ;
-(GEOMapServiceTraits *)traits;
-(BOOL)isChainResultSet;
-(NSArray *)refinedMapItems;
-(NSArray *)collectionResults;
-(int)searchResultType;
-(GEODirectionIntent *)directionIntent;
-(GEOResolvedItem *)clientResolvedResult;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 queue:(id)arg3 networkActivity:(/*^block*/id)arg4 ;
-(BOOL)shouldEnableRedoSearch;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(NSArray *)relatedSearchSuggestions;
-(NSArray *)retainedSearchMetadata;
-(id)initWithTicket:(id)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSError *)error;
-(NSArray *)searchResultSections;
-(NSArray *)displayHeaderSubstitutes;
-(NSString *)description;
-(NSArray *)browseCategories;
-(unsigned)dymSuggestionVisibleTime;
-(NSArray *)publisherResults;
-(double)requestResponseTime;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSString *)resultDisplayHeader;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(NSArray *)relatedEntitySections;
-(GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
-(GEOCategorySearchResultSection *)categorySearchResultSection;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(NSArray *)exactMapItems;
-(void)applyToPlaceInfo:(id)arg1 ;
-(BOOL)showDymSuggestionCloseButton;
-(NSString *)sectionHeader;
-(void)cancel;
-(GEOMapRegion *)boundingRegion;
@end

