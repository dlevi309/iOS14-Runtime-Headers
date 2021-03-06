/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSParsedDataPrivate.h>

@class NSString, NSURL;

@interface BCSParsedURLData : NSObject <BCSParsedDataPrivate> {

	long long _type;
	NSString* _extraPreviewText;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * extraPreviewText;              //@synthesize extraPreviewText=_extraPreviewText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extraPreviewText;
-(id)initWithURL:(id)arg1 type:(long long)arg2 ;
-(id)initWithURL:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3 ;
@end

