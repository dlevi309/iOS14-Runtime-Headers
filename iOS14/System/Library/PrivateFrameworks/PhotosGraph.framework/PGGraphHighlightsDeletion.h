/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange {

	NSSet* _highlightLocalIdentifiers;

}

@property (nonatomic,readonly) NSSet * highlightLocalIdentifiers;              //@synthesize highlightLocalIdentifiers=_highlightLocalIdentifiers - In the implementation block
-(unsigned long long)changeCount;
-(id)description;
-(unsigned long long)type;
-(id)initWithHighlightLocalIdentifiers:(id)arg1 ;
-(NSSet *)highlightLocalIdentifiers;
@end

