/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWScript.h>

@class WKUserScript, NSString;

@interface SWPresentationStateScript : NSObject <SWScript> {

	WKUserScript* userScript;
	unsigned long long _presentationState;

}

@property (nonatomic,readonly) unsigned long long presentationState;              //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)presentationState;
-(NSString *)identifier;
-(WKUserScript *)userScript;
-(id)initWithPresentationState:(unsigned long long)arg1 ;
-(NSString *)executableScript;
-(BOOL)queueable;
@end

