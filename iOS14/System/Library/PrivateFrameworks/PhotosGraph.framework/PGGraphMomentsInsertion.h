/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsInsertion : PGGraphChange {

	NSSet* _momentLocalIdentifiers;
	NSSet* _moments;

}

@property (nonatomic,readonly) NSSet * momentLocalIdentifiers;              //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * moments;                             //@synthesize moments=_moments - In the implementation block
-(unsigned long long)changeCount;
-(NSSet *)moments;
-(id)description;
-(NSSet *)momentLocalIdentifiers;
-(id)initWithMoments:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithMomentLocalIdentifiers:(id)arg1 ;
@end

