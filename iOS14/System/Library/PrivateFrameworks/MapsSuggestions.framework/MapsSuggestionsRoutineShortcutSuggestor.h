/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsShortcutSuggestor.h>

@class MapsSuggestionsRoutine, NSString;

@interface MapsSuggestionsRoutineShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor> {

	MapsSuggestionsRoutine* _routine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromResourceDepot:(id)arg1 ;
-(char)suggestShortcutsOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithRoutine:(id)arg1 ;
@end

