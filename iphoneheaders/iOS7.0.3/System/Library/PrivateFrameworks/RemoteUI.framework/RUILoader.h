/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RemoteUI/RUIHTTPRequest.h>

@class RUIParser, NSURL;

@interface RUILoader : RUIHTTPRequest {

	RUIParser* _parser;
	NSURL* _url;
	BOOL _allowNonSecureHTTP;

}

@property (assign,nonatomic) BOOL allowNonSecureHTTP;              //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
-(void)parseData:(id)arg1 ;
-(void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)URL;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(void)loadXMLUIWithRequest:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(BOOL)allowNonSecureHTTP;
-(void)_finishLoad;
-(BOOL)anyWebViewLoading;
-(void)webViewFinishedLoading;
-(void)allWebViewsFinishedLoading;
-(void)loadXMLUIWithURL:(id)arg1 ;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(void)didParseData;
@end
