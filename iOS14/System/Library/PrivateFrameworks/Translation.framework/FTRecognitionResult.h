/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTRecognitionSausage, NSArray;

@interface FTRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionResult* _root;

}

@property (nonatomic,readonly) FTRecognitionSausage * pre_itn; 
@property (nonatomic,readonly) FTRecognitionSausage * post_itn; 
@property (nonatomic,readonly) NSArray * pre_itn_nbest_choices; 
@property (nonatomic,readonly) NSArray * post_itn_nbest_choices; 
@property (nonatomic,readonly) NSArray * pre_itn_token_to_post_itn_char_alignment; 
@property (nonatomic,readonly) NSArray * choice_alignments; 
-(FTRecognitionSausage *)post_itn;
-(FTRecognitionSausage *)pre_itn;
-(NSArray *)pre_itn_nbest_choices;
-(NSArray *)post_itn_nbest_choices;
-(NSArray *)pre_itn_token_to_post_itn_char_alignment;
-(NSArray *)choice_alignments;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionResult*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RecognitionResult>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionResult*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

