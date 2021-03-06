/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSString, WLKRottenTomatoesRating, NSDate;

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata {

	NSString* _studio;
	WLKRottenTomatoesRating* _rottenTomatoesRating;
	double _duration;
	NSDate* _releaseDate;

}

@property (nonatomic,copy,readonly) NSString * studio;                                      //@synthesize studio=_studio - In the implementation block
@property (nonatomic,readonly) WLKRottenTomatoesRating * rottenTomatoesRating;              //@synthesize rottenTomatoesRating=_rottenTomatoesRating - In the implementation block
@property (nonatomic,readonly) double duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                                        //@synthesize releaseDate=_releaseDate - In the implementation block
-(NSDate *)releaseDate;
-(NSString *)studio;
-(id)initWithDictionary:(id)arg1 ;
-(double)duration;
-(WLKRottenTomatoesRating *)rottenTomatoesRating;
@end

