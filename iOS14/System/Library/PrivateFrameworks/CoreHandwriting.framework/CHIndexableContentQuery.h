/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHQuery.h>

@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery {

	CHRecognitionSessionIndexableContent* _indexableContent;

}

@property (setter=_setIndexableContent:,retain) CHRecognitionSessionIndexableContent * indexableContent;              //@synthesize indexableContent=_indexableContent - In the implementation block
-(id)debugName;
-(void)dealloc;
-(id)initWithRecognitionSession:(id)arg1 ;
-(CHRecognitionSessionIndexableContent *)indexableContent;
-(void)q_updateQueryResult;
-(void)_setIndexableContent:(id)arg1 ;
@end

