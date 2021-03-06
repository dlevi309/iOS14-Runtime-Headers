/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSRequest.h>
@class NSString, NSArray;


@protocol VSJSRequest <JSExport>
@property (nonatomic,copy,readonly) NSString * requestType; 
@property (nonatomic,copy,readonly) NSString * requestBody; 
@property (nonatomic,copy,readonly) NSString * currentAuthentication; 
@property (nonatomic,copy,readonly) NSString * appleVerificationToken; 
@property (nonatomic,copy,readonly) NSString * requestorVerificationToken; 
@property (nonatomic,copy,readonly) NSArray * attributeNames; 
@required
-(NSString *)requestType;
-(NSArray *)attributeNames;
-(NSString *)requestBody;
-(NSString *)requestorVerificationToken;
-(NSString *)currentAuthentication;
-(NSString *)appleVerificationToken;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface VSJSRequest : IKJSObject <VSJSRequest, NSCopying> {

	NSString* _requestType;
	NSString* _requestBody;
	NSString* _currentAuthentication;
	NSString* _appleVerificationToken;
	NSString* _requestorVerificationToken;
	NSArray* _attributeNames;

}

@property (nonatomic,copy) NSString * requestType;                             //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * requestBody;                             //@synthesize requestBody=_requestBody - In the implementation block
@property (nonatomic,copy) NSString * currentAuthentication;                   //@synthesize currentAuthentication=_currentAuthentication - In the implementation block
@property (nonatomic,copy) NSString * appleVerificationToken;                  //@synthesize appleVerificationToken=_appleVerificationToken - In the implementation block
@property (nonatomic,copy) NSString * requestorVerificationToken;              //@synthesize requestorVerificationToken=_requestorVerificationToken - In the implementation block
@property (nonatomic,copy) NSArray * attributeNames;                           //@synthesize attributeNames=_attributeNames - In the implementation block
-(void)setRequestType:(NSString *)arg1 ;
-(NSString *)requestType;
-(NSArray *)attributeNames;
-(void)setRequestBody:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)requestBody;
-(void)setAttributeNames:(NSArray *)arg1 ;
-(NSString *)requestorVerificationToken;
-(void)setCurrentAuthentication:(NSString *)arg1 ;
-(void)setRequestorVerificationToken:(NSString *)arg1 ;
-(void)setAppleVerificationToken:(NSString *)arg1 ;
-(NSString *)currentAuthentication;
-(NSString *)appleVerificationToken;
@end

