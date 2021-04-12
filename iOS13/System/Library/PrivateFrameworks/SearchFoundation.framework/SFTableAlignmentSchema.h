/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTableAlignmentSchema.h>
@class NSArray, NSDictionary, NSData;


@protocol SFTableAlignmentSchema <NSObject>
@property (nonatomic,copy) NSArray * tableColumnAlignment; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setMetadata:(id)arg1;
-(NSDictionary *)metadata;
-(NSData *)jsonData;
-(NSArray *)tableColumnAlignment;
-(void)setTableColumnAlignment:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFTableAlignmentSchema : NSObject <SFTableAlignmentSchema, NSSecureCoding, NSCopying> {

	NSArray* _tableColumnAlignment;
	NSDictionary* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * tableColumnAlignment;                           //@synthesize tableColumnAlignment=_tableColumnAlignment - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSArray *)tableColumnAlignment;
-(void)setTableColumnAlignment:(NSArray *)arg1 ;
@end
