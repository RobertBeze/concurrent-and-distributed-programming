/* soapServer.c
   Generated by gSOAP 2.8.122 for operations.h

gSOAP XML Web services tools
Copyright (C) 2000-2021, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapServer.c ver 2.8.122 2022-06-15 10:02:55 GMT")
SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap *soap)
{
#ifndef WITH_FASTCGI
	soap->keep_alive = soap->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (soap->keep_alive > 0 && soap->max_keep_alive > 0)
			soap->keep_alive--;
#endif
		if (soap_begin_serve(soap))
		{	if (soap->error >= SOAP_STOP)
				continue;
			return soap->error;
		}
		if ((soap_serve_request(soap) || (soap->fserveloop && soap->fserveloop(soap))) && soap->error && soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(soap);
#else
			return soap_send_fault(soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(soap);
		soap_end(soap);
	} while (1);
#else
	} while (soap->keep_alive);
#endif
	return SOAP_OK;
}

#ifndef WITH_NOSERVEREQUEST
SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap *soap)
{
	(void)soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:storeFile"))
		return soap_serve___ns1__storeFile(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:createFile"))
		return soap_serve___ns1__createFile(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:modifyFile"))
		return soap_serve___ns1__modifyFile(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:removeFile"))
		return soap_serve___ns1__removeFile(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:clientLogFiles"))
		return soap_serve___ns1__clientLogFiles(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:servFiles"))
		return soap_serve___ns1__servFiles(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:filesInCertainProgLanguage"))
		return soap_serve___ns1__filesInCertainProgLanguage(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:largestServFile"))
		return soap_serve___ns1__largestServFile(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:smallestServFile"))
		return soap_serve___ns1__smallestServFile(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:filesStatistics"))
		return soap_serve___ns1__filesStatistics(soap);
	if (!soap_match_tag(soap, soap->tag, "ns1:totalServFilesSize"))
		return soap_serve___ns1__totalServFilesSize(soap);
	return soap->error = SOAP_NO_METHOD;
}
#endif

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__storeFile(struct soap *soap)
{	struct __ns1__storeFile soap_tmp___ns1__storeFile;
	struct _ns1__storeFileResponse ns1__storeFileResponse;
	soap_default__ns1__storeFileResponse(soap, &ns1__storeFileResponse);
	soap_default___ns1__storeFile(soap, &soap_tmp___ns1__storeFile);
	if (!soap_get___ns1__storeFile(soap, &soap_tmp___ns1__storeFile, "-ns1:storeFile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__storeFile(soap, soap_tmp___ns1__storeFile.ns1__storeFile, &ns1__storeFileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__storeFileResponse(soap, &ns1__storeFileResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__storeFileResponse(soap, &ns1__storeFileResponse, "ns1:storeFileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__storeFileResponse(soap, &ns1__storeFileResponse, "ns1:storeFileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__createFile(struct soap *soap)
{	struct __ns1__createFile soap_tmp___ns1__createFile;
	struct _ns1__createFileResponse ns1__createFileResponse;
	soap_default__ns1__createFileResponse(soap, &ns1__createFileResponse);
	soap_default___ns1__createFile(soap, &soap_tmp___ns1__createFile);
	if (!soap_get___ns1__createFile(soap, &soap_tmp___ns1__createFile, "-ns1:createFile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__createFile(soap, soap_tmp___ns1__createFile.ns1__createFile, &ns1__createFileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__createFileResponse(soap, &ns1__createFileResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__createFileResponse(soap, &ns1__createFileResponse, "ns1:createFileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__createFileResponse(soap, &ns1__createFileResponse, "ns1:createFileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__modifyFile(struct soap *soap)
{	struct __ns1__modifyFile soap_tmp___ns1__modifyFile;
	struct _ns1__modifyFileResponse ns1__modifyFileResponse;
	soap_default__ns1__modifyFileResponse(soap, &ns1__modifyFileResponse);
	soap_default___ns1__modifyFile(soap, &soap_tmp___ns1__modifyFile);
	if (!soap_get___ns1__modifyFile(soap, &soap_tmp___ns1__modifyFile, "-ns1:modifyFile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__modifyFile(soap, soap_tmp___ns1__modifyFile.ns1__modifyFile, &ns1__modifyFileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__modifyFileResponse(soap, &ns1__modifyFileResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__modifyFileResponse(soap, &ns1__modifyFileResponse, "ns1:modifyFileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__modifyFileResponse(soap, &ns1__modifyFileResponse, "ns1:modifyFileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__removeFile(struct soap *soap)
{	struct __ns1__removeFile soap_tmp___ns1__removeFile;
	struct _ns1__removeFileResponse ns1__removeFileResponse;
	soap_default__ns1__removeFileResponse(soap, &ns1__removeFileResponse);
	soap_default___ns1__removeFile(soap, &soap_tmp___ns1__removeFile);
	if (!soap_get___ns1__removeFile(soap, &soap_tmp___ns1__removeFile, "-ns1:removeFile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__removeFile(soap, soap_tmp___ns1__removeFile.ns1__removeFile, &ns1__removeFileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__removeFileResponse(soap, &ns1__removeFileResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__removeFileResponse(soap, &ns1__removeFileResponse, "ns1:removeFileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__removeFileResponse(soap, &ns1__removeFileResponse, "ns1:removeFileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__clientLogFiles(struct soap *soap)
{	struct __ns1__clientLogFiles soap_tmp___ns1__clientLogFiles;
	struct _ns1__clientLogFilesResponse1 ns1__clientLogFilesResponse1;
	soap_default__ns1__clientLogFilesResponse1(soap, &ns1__clientLogFilesResponse1);
	soap_default___ns1__clientLogFiles(soap, &soap_tmp___ns1__clientLogFiles);
	if (!soap_get___ns1__clientLogFiles(soap, &soap_tmp___ns1__clientLogFiles, "-ns1:clientLogFiles", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__clientLogFiles(soap, soap_tmp___ns1__clientLogFiles.ns1__clientLogFiles, &ns1__clientLogFilesResponse1);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__clientLogFilesResponse1(soap, &ns1__clientLogFilesResponse1);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__clientLogFilesResponse1(soap, &ns1__clientLogFilesResponse1, "ns1:clientLogFilesResponse1", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__clientLogFilesResponse1(soap, &ns1__clientLogFilesResponse1, "ns1:clientLogFilesResponse1", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__servFiles(struct soap *soap)
{	struct __ns1__servFiles soap_tmp___ns1__servFiles;
	struct _ns1__servFilesResponse1 ns1__servFilesResponse1;
	soap_default__ns1__servFilesResponse1(soap, &ns1__servFilesResponse1);
	soap_default___ns1__servFiles(soap, &soap_tmp___ns1__servFiles);
	if (!soap_get___ns1__servFiles(soap, &soap_tmp___ns1__servFiles, "-ns1:servFiles", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__servFiles(soap, soap_tmp___ns1__servFiles.ns1__servFiles, &ns1__servFilesResponse1);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__servFilesResponse1(soap, &ns1__servFilesResponse1);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__servFilesResponse1(soap, &ns1__servFilesResponse1, "ns1:servFilesResponse1", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__servFilesResponse1(soap, &ns1__servFilesResponse1, "ns1:servFilesResponse1", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__filesInCertainProgLanguage(struct soap *soap)
{	struct __ns1__filesInCertainProgLanguage soap_tmp___ns1__filesInCertainProgLanguage;
	struct _ns1__filesInCertainProgLanguageResponse1 ns1__filesInCertainProgLanguageResponse1;
	soap_default__ns1__filesInCertainProgLanguageResponse1(soap, &ns1__filesInCertainProgLanguageResponse1);
	soap_default___ns1__filesInCertainProgLanguage(soap, &soap_tmp___ns1__filesInCertainProgLanguage);
	if (!soap_get___ns1__filesInCertainProgLanguage(soap, &soap_tmp___ns1__filesInCertainProgLanguage, "-ns1:filesInCertainProgLanguage", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__filesInCertainProgLanguage(soap, soap_tmp___ns1__filesInCertainProgLanguage.ns1__filesInCertainProgLanguage, &ns1__filesInCertainProgLanguageResponse1);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__filesInCertainProgLanguageResponse1(soap, &ns1__filesInCertainProgLanguageResponse1);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__filesInCertainProgLanguageResponse1(soap, &ns1__filesInCertainProgLanguageResponse1, "ns1:filesInCertainProgLanguageResponse1", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__filesInCertainProgLanguageResponse1(soap, &ns1__filesInCertainProgLanguageResponse1, "ns1:filesInCertainProgLanguageResponse1", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__largestServFile(struct soap *soap)
{	struct __ns1__largestServFile soap_tmp___ns1__largestServFile;
	struct _ns1__largestServFileResponse1 ns1__largestServFileResponse1;
	soap_default__ns1__largestServFileResponse1(soap, &ns1__largestServFileResponse1);
	soap_default___ns1__largestServFile(soap, &soap_tmp___ns1__largestServFile);
	if (!soap_get___ns1__largestServFile(soap, &soap_tmp___ns1__largestServFile, "-ns1:largestServFile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__largestServFile(soap, soap_tmp___ns1__largestServFile.ns1__largestServFile, &ns1__largestServFileResponse1);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__largestServFileResponse1(soap, &ns1__largestServFileResponse1);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__largestServFileResponse1(soap, &ns1__largestServFileResponse1, "ns1:largestServFileResponse1", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__largestServFileResponse1(soap, &ns1__largestServFileResponse1, "ns1:largestServFileResponse1", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__smallestServFile(struct soap *soap)
{	struct __ns1__smallestServFile soap_tmp___ns1__smallestServFile;
	struct _ns1__smallestServFileResponse1 ns1__smallestServFileResponse1;
	soap_default__ns1__smallestServFileResponse1(soap, &ns1__smallestServFileResponse1);
	soap_default___ns1__smallestServFile(soap, &soap_tmp___ns1__smallestServFile);
	if (!soap_get___ns1__smallestServFile(soap, &soap_tmp___ns1__smallestServFile, "-ns1:smallestServFile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__smallestServFile(soap, soap_tmp___ns1__smallestServFile.ns1__smallestServFile, &ns1__smallestServFileResponse1);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__smallestServFileResponse1(soap, &ns1__smallestServFileResponse1);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__smallestServFileResponse1(soap, &ns1__smallestServFileResponse1, "ns1:smallestServFileResponse1", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__smallestServFileResponse1(soap, &ns1__smallestServFileResponse1, "ns1:smallestServFileResponse1", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__filesStatistics(struct soap *soap)
{	struct __ns1__filesStatistics soap_tmp___ns1__filesStatistics;
	struct _ns1__filesStatisticsResponse1 ns1__filesStatisticsResponse1;
	soap_default__ns1__filesStatisticsResponse1(soap, &ns1__filesStatisticsResponse1);
	soap_default___ns1__filesStatistics(soap, &soap_tmp___ns1__filesStatistics);
	if (!soap_get___ns1__filesStatistics(soap, &soap_tmp___ns1__filesStatistics, "-ns1:filesStatistics", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__filesStatistics(soap, soap_tmp___ns1__filesStatistics.ns1__filesStatistics, &ns1__filesStatisticsResponse1);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__filesStatisticsResponse1(soap, &ns1__filesStatisticsResponse1);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__filesStatisticsResponse1(soap, &ns1__filesStatisticsResponse1, "ns1:filesStatisticsResponse1", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__filesStatisticsResponse1(soap, &ns1__filesStatisticsResponse1, "ns1:filesStatisticsResponse1", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__totalServFilesSize(struct soap *soap)
{	struct __ns1__totalServFilesSize soap_tmp___ns1__totalServFilesSize;
	struct _ns1__totalServFilesSizeResponse1 ns1__totalServFilesSizeResponse1;
	soap_default__ns1__totalServFilesSizeResponse1(soap, &ns1__totalServFilesSizeResponse1);
	soap_default___ns1__totalServFilesSize(soap, &soap_tmp___ns1__totalServFilesSize);
	if (!soap_get___ns1__totalServFilesSize(soap, &soap_tmp___ns1__totalServFilesSize, "-ns1:totalServFilesSize", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __ns1__totalServFilesSize(soap, soap_tmp___ns1__totalServFilesSize.ns1__totalServFilesSize, &ns1__totalServFilesSizeResponse1);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize__ns1__totalServFilesSizeResponse1(soap, &ns1__totalServFilesSizeResponse1);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put__ns1__totalServFilesSizeResponse1(soap, &ns1__totalServFilesSizeResponse1, "ns1:totalServFilesSizeResponse1", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put__ns1__totalServFilesSizeResponse1(soap, &ns1__totalServFilesSizeResponse1, "ns1:totalServFilesSizeResponse1", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapServer.c */