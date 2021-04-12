/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSArray, NSString;

@interface DESRecipe : NSObject <NSCopying> {

	NSDictionary* _recipeUserInfo;
	NSData* _certificate;
	NSArray* _attachments;
	NSArray* _attachmentSignatures;
	NSDictionary* _parametersUsed;
	NSString* _recipeId;
	NSString* _recipeType;

}

@property (nonatomic,copy) NSArray * attachments;                                            //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parametersUsed;                           //@synthesize parametersUsed=_parametersUsed - In the implementation block
@property (nonatomic,copy) NSString * recipeId;                                              //@synthesize recipeId=_recipeId - In the implementation block
@property (nonatomic,copy) NSString * recipeType;                                            //@synthesize recipeType=_recipeType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * secureAggregationRecipeInfo; 
@property (nonatomic,copy,readonly) NSDictionary * recipeUserInfo;                           //@synthesize recipeUserInfo=_recipeUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSData * certificate;                                    //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachmentSignatures;                          //@synthesize attachmentSignatures=_attachmentSignatures - In the implementation block
@property (nonatomic,readonly) BOOL supportsSecureAggregation; 
+(void)initialize;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)attachments;
-(NSString *)recipeId;
-(NSData *)certificate;
-(NSDictionary *)recipeUserInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithRecipeUserInfo:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 ;
-(NSArray *)attachmentSignatures;
-(NSString *)recipeType;
-(BOOL)supportsSecureAggregation;
-(NSDictionary *)secureAggregationRecipeInfo;
-(id)_inithWithContentsOfFile:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 error:(id*)arg4 ;
-(id)_initWithRecipeResponse:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)parametersUsed;
-(void)setRecipeId:(NSString *)arg1 ;
-(void)setRecipeType:(NSString *)arg1 ;
@end
