/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>
#import <MapsSuggestions/MapsSuggestionsDeduper.h>

@class NSString;

@interface MapsSuggestionsFlightDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
-(BOOL)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2 ;
@end

