/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

@interface SAMLEvidence : SAMLBaseElement

@property (nonatomic,readonly) NSString * assertionIdRef; 
@property (nonatomic,readonly) NSString * assertionURIRef; 
@property (nonatomic,readonly) SAMLAssertion * assertion; 
+(id)createElement:(id*)arg1 ;
-(SAMLAssertion *)assertion;
-(NSString *)assertionIdRef;
-(NSString *)assertionURIRef;
@end

