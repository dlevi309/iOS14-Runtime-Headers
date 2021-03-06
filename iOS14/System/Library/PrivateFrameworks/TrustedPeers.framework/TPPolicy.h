/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPPolicyVersion, NSArray, NSDictionary, NSSet;

@interface TPPolicy : NSObject <NSSecureCoding> {

	BOOL _unknownRedactions;
	TPPolicyVersion* _version;
	NSArray* _modelToCategory;
	NSDictionary* _categoriesByView;
	NSDictionary* _introducersByCategory;
	NSArray* _keyViewMapping;
	NSSet* _userControllableViewList;
	NSSet* _piggybackViews;

}

@property (nonatomic,retain) TPPolicyVersion * version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * modelToCategory;                         //@synthesize modelToCategory=_modelToCategory - In the implementation block
@property (nonatomic,retain) NSDictionary * categoriesByView;                   //@synthesize categoriesByView=_categoriesByView - In the implementation block
@property (nonatomic,retain) NSDictionary * introducersByCategory;              //@synthesize introducersByCategory=_introducersByCategory - In the implementation block
@property (nonatomic,retain) NSArray * keyViewMapping;                          //@synthesize keyViewMapping=_keyViewMapping - In the implementation block
@property (nonatomic,retain) NSSet * userControllableViewList;                  //@synthesize userControllableViewList=_userControllableViewList - In the implementation block
@property (nonatomic,retain) NSSet * piggybackViews;                            //@synthesize piggybackViews=_piggybackViews - In the implementation block
@property (assign) BOOL unknownRedactions;                                      //@synthesize unknownRedactions=_unknownRedactions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithModelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 keyViewMapping:(id)arg4 unknownRedactions:(BOOL)arg5 userControllableViewList:(id)arg6 piggybackViews:(id)arg7 version:(id)arg8 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(TPPolicyVersion *)arg1 ;
-(TPPolicyVersion *)version;
-(BOOL)isEqual:(id)arg1 ;
-(id)categoryForModel:(id)arg1 ;
-(BOOL)trustedPeerInCategory:(id)arg1 canIntroduceCategory:(id)arg2 ;
-(BOOL)peerInCategory:(id)arg1 canAccessView:(id)arg2 ;
-(id)syncingPolicyForModel:(id)arg1 syncUserControllableViews:(int)arg2 error:(id*)arg3 ;
-(id)viewsForModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToPolicy:(id)arg1 ;
-(NSArray *)modelToCategory;
-(void)setModelToCategory:(NSArray *)arg1 ;
-(NSDictionary *)categoriesByView;
-(void)setCategoriesByView:(NSDictionary *)arg1 ;
-(NSDictionary *)introducersByCategory;
-(void)setIntroducersByCategory:(NSDictionary *)arg1 ;
-(NSArray *)keyViewMapping;
-(void)setKeyViewMapping:(NSArray *)arg1 ;
-(NSSet *)userControllableViewList;
-(void)setUserControllableViewList:(NSSet *)arg1 ;
-(NSSet *)piggybackViews;
-(void)setPiggybackViews:(NSSet *)arg1 ;
-(BOOL)unknownRedactions;
-(void)setUnknownRedactions:(BOOL)arg1 ;
@end

