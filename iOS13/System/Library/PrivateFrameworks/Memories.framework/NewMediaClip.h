/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/KenBurnsClip.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class NSArray, NSString;

@interface NewMediaClip : KenBurnsClip <CompoundClipInformation> {

	NSArray* _containedClips;

}

@property (nonatomic,retain) NSArray * containedClips;              //@synthesize containedClips=_containedClips - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(int)arg1 ;
-(int)maxDuration;
-(NSArray *)containedClips;
-(void)setContainedClips:(NSArray *)arg1 ;
-(BOOL)expandsEditList;
-(id)newMediaAssetVideoPiece;
-(id)initWithKBClip:(id)arg1 ;
@end

