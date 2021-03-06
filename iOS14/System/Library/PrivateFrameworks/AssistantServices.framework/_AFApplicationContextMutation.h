/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFApplicationContextMutating.h>

@class AFApplicationContext, NSString, AFBulletin, AceObject, NSDictionary;

@interface _AFApplicationContextMutation : NSObject <AFApplicationContextMutating> {

	AFApplicationContext* _baseModel;
	NSString* _associatedBundleIdentifier;
	AFBulletin* _bulletin;
	AceObject* _aceContext;
	NSDictionary* _contextDictionary;
	struct {
		unsigned isDirty : 1;
		unsigned hasAssociatedBundleIdentifier : 1;
		unsigned hasBulletin : 1;
		unsigned hasAceContext : 1;
		unsigned hasContextDictionary : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setAssociatedBundleIdentifier:(id)arg1 ;
-(void)setAceContext:(id)arg1 ;
-(void)setContextDictionary:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setBulletin:(id)arg1 ;
@end

