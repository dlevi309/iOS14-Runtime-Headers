/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFUserReportRequest.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFUserReportRequest <NSObject>
@property (nonatomic,copy) NSString * affordanceText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * dismissText; 
@property (nonatomic,copy) NSArray * userReportOptions; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)affordanceText;
-(void)setAffordanceText:(id)arg1;
-(NSString *)dismissText;
-(void)setDismissText:(id)arg1;
-(NSArray *)userReportOptions;
-(void)setUserReportOptions:(id)arg1;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFUserReportRequest : NSObject <SFUserReportRequest, NSSecureCoding, NSCopying> {

	NSString* _affordanceText;
	NSString* _title;
	NSString* _dismissText;
	NSArray* _userReportOptions;

}

@property (nonatomic,copy) NSString * affordanceText;                                //@synthesize affordanceText=_affordanceText - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * dismissText;                                   //@synthesize dismissText=_dismissText - In the implementation block
@property (nonatomic,copy) NSArray * userReportOptions;                              //@synthesize userReportOptions=_userReportOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)affordanceText;
-(void)setAffordanceText:(NSString *)arg1 ;
-(NSString *)dismissText;
-(void)setDismissText:(NSString *)arg1 ;
-(NSArray *)userReportOptions;
-(void)setUserReportOptions:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

