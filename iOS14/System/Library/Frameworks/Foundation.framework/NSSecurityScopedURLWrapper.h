/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, NSString;

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding> {

	BOOL _readonly;
	BOOL _backedByFileProvider;
	NSData* _scope;
	NSURL* _url;
	NSString* _providerIdentifier;
	NSString* _domainIdentifier;
	NSString* _itemIdentifier;

}

@property (nonatomic,copy,readonly) NSURL * url;                                                     //@synthesize url=_url - In the implementation block
@property (getter=isReadonly,nonatomic,readonly) BOOL readonly;                                      //@synthesize readonly=_readonly - In the implementation block
@property (getter=isBackedByFileProvider,nonatomic,readonly) BOOL backedByFileProvider;              //@synthesize backedByFileProvider=_backedByFileProvider - In the implementation block
@property (nonatomic,readonly) NSString * providerIdentifier;                                        //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                                          //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                                            //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * _scope;                                                      //@synthesize scope=_scope - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)_scope;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 ;
-(NSString *)domainIdentifier;
-(id)initWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 readonly:(BOOL)arg2 extensionClass:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 readonly:(BOOL)arg2 scope:(id)arg3 ;
-(id)initWithURL:(id)arg1 readonly:(BOOL)arg2 ;
-(id)description;
-(BOOL)isBackedByFileProvider;
-(BOOL)isReadonly;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end
