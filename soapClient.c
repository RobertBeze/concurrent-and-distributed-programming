/* soapClient.c
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

SOAP_SOURCE_STAMP("@(#) soapClient.c ver 2.8.122 2022-06-15 10:02:55 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__storeFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__storeFile *ns1__storeFile, struct _ns1__storeFileResponse *ns1__storeFileResponse)
{	if (soap_send___ns1__storeFile(soap, soap_endpoint, soap_action, ns1__storeFile) || soap_recv___ns1__storeFile(soap, ns1__storeFileResponse))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__storeFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__storeFile *ns1__storeFile)
{	struct __ns1__storeFile soap_tmp___ns1__storeFile;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/storeFile";
	soap_tmp___ns1__storeFile.ns1__storeFile = ns1__storeFile;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__storeFile(soap, &soap_tmp___ns1__storeFile);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__storeFile(soap, &soap_tmp___ns1__storeFile, "-ns1:storeFile", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__storeFile(soap, &soap_tmp___ns1__storeFile, "-ns1:storeFile", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__storeFile(struct soap *soap, struct _ns1__storeFileResponse *ns1__storeFileResponse)
{
	if (!ns1__storeFileResponse)
		return soap_closesock(soap);
	soap_default__ns1__storeFileResponse(soap, ns1__storeFileResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__storeFileResponse(soap, ns1__storeFileResponse, "ns1:storeFileResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__createFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__createFile *ns1__createFile, struct _ns1__createFileResponse *ns1__createFileResponse)
{	if (soap_send___ns1__createFile(soap, soap_endpoint, soap_action, ns1__createFile) || soap_recv___ns1__createFile(soap, ns1__createFileResponse))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__createFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__createFile *ns1__createFile)
{	struct __ns1__createFile soap_tmp___ns1__createFile;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/createFile";
	soap_tmp___ns1__createFile.ns1__createFile = ns1__createFile;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__createFile(soap, &soap_tmp___ns1__createFile);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__createFile(soap, &soap_tmp___ns1__createFile, "-ns1:createFile", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__createFile(soap, &soap_tmp___ns1__createFile, "-ns1:createFile", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__createFile(struct soap *soap, struct _ns1__createFileResponse *ns1__createFileResponse)
{
	if (!ns1__createFileResponse)
		return soap_closesock(soap);
	soap_default__ns1__createFileResponse(soap, ns1__createFileResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__createFileResponse(soap, ns1__createFileResponse, "ns1:createFileResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__modifyFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__modifyFile *ns1__modifyFile, struct _ns1__modifyFileResponse *ns1__modifyFileResponse)
{	if (soap_send___ns1__modifyFile(soap, soap_endpoint, soap_action, ns1__modifyFile) || soap_recv___ns1__modifyFile(soap, ns1__modifyFileResponse))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__modifyFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__modifyFile *ns1__modifyFile)
{	struct __ns1__modifyFile soap_tmp___ns1__modifyFile;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/modifyFile";
	soap_tmp___ns1__modifyFile.ns1__modifyFile = ns1__modifyFile;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__modifyFile(soap, &soap_tmp___ns1__modifyFile);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__modifyFile(soap, &soap_tmp___ns1__modifyFile, "-ns1:modifyFile", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__modifyFile(soap, &soap_tmp___ns1__modifyFile, "-ns1:modifyFile", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__modifyFile(struct soap *soap, struct _ns1__modifyFileResponse *ns1__modifyFileResponse)
{
	if (!ns1__modifyFileResponse)
		return soap_closesock(soap);
	soap_default__ns1__modifyFileResponse(soap, ns1__modifyFileResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__modifyFileResponse(soap, ns1__modifyFileResponse, "ns1:modifyFileResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__removeFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__removeFile *ns1__removeFile, struct _ns1__removeFileResponse *ns1__removeFileResponse)
{	if (soap_send___ns1__removeFile(soap, soap_endpoint, soap_action, ns1__removeFile) || soap_recv___ns1__removeFile(soap, ns1__removeFileResponse))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__removeFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__removeFile *ns1__removeFile)
{	struct __ns1__removeFile soap_tmp___ns1__removeFile;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/removeFile";
	soap_tmp___ns1__removeFile.ns1__removeFile = ns1__removeFile;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__removeFile(soap, &soap_tmp___ns1__removeFile);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__removeFile(soap, &soap_tmp___ns1__removeFile, "-ns1:removeFile", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__removeFile(soap, &soap_tmp___ns1__removeFile, "-ns1:removeFile", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__removeFile(struct soap *soap, struct _ns1__removeFileResponse *ns1__removeFileResponse)
{
	if (!ns1__removeFileResponse)
		return soap_closesock(soap);
	soap_default__ns1__removeFileResponse(soap, ns1__removeFileResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__removeFileResponse(soap, ns1__removeFileResponse, "ns1:removeFileResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__clientLogFiles(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__clientLogFiles *ns1__clientLogFiles, struct _ns1__clientLogFilesResponse1 *ns1__clientLogFilesResponse1)
{	if (soap_send___ns1__clientLogFiles(soap, soap_endpoint, soap_action, ns1__clientLogFiles) || soap_recv___ns1__clientLogFiles(soap, ns1__clientLogFilesResponse1))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__clientLogFiles(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__clientLogFiles *ns1__clientLogFiles)
{	struct __ns1__clientLogFiles soap_tmp___ns1__clientLogFiles;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/clientLogFiles";
	soap_tmp___ns1__clientLogFiles.ns1__clientLogFiles = ns1__clientLogFiles;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__clientLogFiles(soap, &soap_tmp___ns1__clientLogFiles);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__clientLogFiles(soap, &soap_tmp___ns1__clientLogFiles, "-ns1:clientLogFiles", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__clientLogFiles(soap, &soap_tmp___ns1__clientLogFiles, "-ns1:clientLogFiles", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__clientLogFiles(struct soap *soap, struct _ns1__clientLogFilesResponse1 *ns1__clientLogFilesResponse1)
{
	if (!ns1__clientLogFilesResponse1)
		return soap_closesock(soap);
	soap_default__ns1__clientLogFilesResponse1(soap, ns1__clientLogFilesResponse1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__clientLogFilesResponse1(soap, ns1__clientLogFilesResponse1, "ns1:clientLogFilesResponse1", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__servFiles(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__servFiles *ns1__servFiles, struct _ns1__servFilesResponse1 *ns1__servFilesResponse1)
{	if (soap_send___ns1__servFiles(soap, soap_endpoint, soap_action, ns1__servFiles) || soap_recv___ns1__servFiles(soap, ns1__servFilesResponse1))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__servFiles(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__servFiles *ns1__servFiles)
{	struct __ns1__servFiles soap_tmp___ns1__servFiles;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/servFiles";
	soap_tmp___ns1__servFiles.ns1__servFiles = ns1__servFiles;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__servFiles(soap, &soap_tmp___ns1__servFiles);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__servFiles(soap, &soap_tmp___ns1__servFiles, "-ns1:servFiles", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__servFiles(soap, &soap_tmp___ns1__servFiles, "-ns1:servFiles", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__servFiles(struct soap *soap, struct _ns1__servFilesResponse1 *ns1__servFilesResponse1)
{
	if (!ns1__servFilesResponse1)
		return soap_closesock(soap);
	soap_default__ns1__servFilesResponse1(soap, ns1__servFilesResponse1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__servFilesResponse1(soap, ns1__servFilesResponse1, "ns1:servFilesResponse1", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__filesInCertainProgLanguage(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__filesInCertainProgLanguage *ns1__filesInCertainProgLanguage, struct _ns1__filesInCertainProgLanguageResponse1 *ns1__filesInCertainProgLanguageResponse1)
{	if (soap_send___ns1__filesInCertainProgLanguage(soap, soap_endpoint, soap_action, ns1__filesInCertainProgLanguage) || soap_recv___ns1__filesInCertainProgLanguage(soap, ns1__filesInCertainProgLanguageResponse1))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__filesInCertainProgLanguage(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__filesInCertainProgLanguage *ns1__filesInCertainProgLanguage)
{	struct __ns1__filesInCertainProgLanguage soap_tmp___ns1__filesInCertainProgLanguage;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/filesInCertainProgLanguage";
	soap_tmp___ns1__filesInCertainProgLanguage.ns1__filesInCertainProgLanguage = ns1__filesInCertainProgLanguage;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__filesInCertainProgLanguage(soap, &soap_tmp___ns1__filesInCertainProgLanguage);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__filesInCertainProgLanguage(soap, &soap_tmp___ns1__filesInCertainProgLanguage, "-ns1:filesInCertainProgLanguage", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__filesInCertainProgLanguage(soap, &soap_tmp___ns1__filesInCertainProgLanguage, "-ns1:filesInCertainProgLanguage", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__filesInCertainProgLanguage(struct soap *soap, struct _ns1__filesInCertainProgLanguageResponse1 *ns1__filesInCertainProgLanguageResponse1)
{
	if (!ns1__filesInCertainProgLanguageResponse1)
		return soap_closesock(soap);
	soap_default__ns1__filesInCertainProgLanguageResponse1(soap, ns1__filesInCertainProgLanguageResponse1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__filesInCertainProgLanguageResponse1(soap, ns1__filesInCertainProgLanguageResponse1, "ns1:filesInCertainProgLanguageResponse1", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__largestServFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__largestServFile *ns1__largestServFile, struct _ns1__largestServFileResponse1 *ns1__largestServFileResponse1)
{	if (soap_send___ns1__largestServFile(soap, soap_endpoint, soap_action, ns1__largestServFile) || soap_recv___ns1__largestServFile(soap, ns1__largestServFileResponse1))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__largestServFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__largestServFile *ns1__largestServFile)
{	struct __ns1__largestServFile soap_tmp___ns1__largestServFile;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/largestServFile";
	soap_tmp___ns1__largestServFile.ns1__largestServFile = ns1__largestServFile;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__largestServFile(soap, &soap_tmp___ns1__largestServFile);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__largestServFile(soap, &soap_tmp___ns1__largestServFile, "-ns1:largestServFile", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__largestServFile(soap, &soap_tmp___ns1__largestServFile, "-ns1:largestServFile", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__largestServFile(struct soap *soap, struct _ns1__largestServFileResponse1 *ns1__largestServFileResponse1)
{
	if (!ns1__largestServFileResponse1)
		return soap_closesock(soap);
	soap_default__ns1__largestServFileResponse1(soap, ns1__largestServFileResponse1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__largestServFileResponse1(soap, ns1__largestServFileResponse1, "ns1:largestServFileResponse1", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__smallestServFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__smallestServFile *ns1__smallestServFile, struct _ns1__smallestServFileResponse1 *ns1__smallestServFileResponse1)
{	if (soap_send___ns1__smallestServFile(soap, soap_endpoint, soap_action, ns1__smallestServFile) || soap_recv___ns1__smallestServFile(soap, ns1__smallestServFileResponse1))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__smallestServFile(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__smallestServFile *ns1__smallestServFile)
{	struct __ns1__smallestServFile soap_tmp___ns1__smallestServFile;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/smallestServFile";
	soap_tmp___ns1__smallestServFile.ns1__smallestServFile = ns1__smallestServFile;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__smallestServFile(soap, &soap_tmp___ns1__smallestServFile);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__smallestServFile(soap, &soap_tmp___ns1__smallestServFile, "-ns1:smallestServFile", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__smallestServFile(soap, &soap_tmp___ns1__smallestServFile, "-ns1:smallestServFile", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__smallestServFile(struct soap *soap, struct _ns1__smallestServFileResponse1 *ns1__smallestServFileResponse1)
{
	if (!ns1__smallestServFileResponse1)
		return soap_closesock(soap);
	soap_default__ns1__smallestServFileResponse1(soap, ns1__smallestServFileResponse1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__smallestServFileResponse1(soap, ns1__smallestServFileResponse1, "ns1:smallestServFileResponse1", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__filesStatistics(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__filesStatistics *ns1__filesStatistics, struct _ns1__filesStatisticsResponse1 *ns1__filesStatisticsResponse1)
{	if (soap_send___ns1__filesStatistics(soap, soap_endpoint, soap_action, ns1__filesStatistics) || soap_recv___ns1__filesStatistics(soap, ns1__filesStatisticsResponse1))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__filesStatistics(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__filesStatistics *ns1__filesStatistics)
{	struct __ns1__filesStatistics soap_tmp___ns1__filesStatistics;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/filesStatistics";
	soap_tmp___ns1__filesStatistics.ns1__filesStatistics = ns1__filesStatistics;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__filesStatistics(soap, &soap_tmp___ns1__filesStatistics);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__filesStatistics(soap, &soap_tmp___ns1__filesStatistics, "-ns1:filesStatistics", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__filesStatistics(soap, &soap_tmp___ns1__filesStatistics, "-ns1:filesStatistics", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__filesStatistics(struct soap *soap, struct _ns1__filesStatisticsResponse1 *ns1__filesStatisticsResponse1)
{
	if (!ns1__filesStatisticsResponse1)
		return soap_closesock(soap);
	soap_default__ns1__filesStatisticsResponse1(soap, ns1__filesStatisticsResponse1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__filesStatisticsResponse1(soap, ns1__filesStatisticsResponse1, "ns1:filesStatisticsResponse1", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__totalServFilesSize(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__totalServFilesSize *ns1__totalServFilesSize, struct _ns1__totalServFilesSizeResponse1 *ns1__totalServFilesSizeResponse1)
{	if (soap_send___ns1__totalServFilesSize(soap, soap_endpoint, soap_action, ns1__totalServFilesSize) || soap_recv___ns1__totalServFilesSize(soap, ns1__totalServFilesSizeResponse1))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send___ns1__totalServFilesSize(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__totalServFilesSize *ns1__totalServFilesSize)
{	struct __ns1__totalServFilesSize soap_tmp___ns1__totalServFilesSize;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8889";
	if (soap_action == NULL)
		soap_action = "http://www.example.org/operations/totalServFilesSize";
	soap_tmp___ns1__totalServFilesSize.ns1__totalServFilesSize = ns1__totalServFilesSize;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__totalServFilesSize(soap, &soap_tmp___ns1__totalServFilesSize);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__totalServFilesSize(soap, &soap_tmp___ns1__totalServFilesSize, "-ns1:totalServFilesSize", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__totalServFilesSize(soap, &soap_tmp___ns1__totalServFilesSize, "-ns1:totalServFilesSize", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv___ns1__totalServFilesSize(struct soap *soap, struct _ns1__totalServFilesSizeResponse1 *ns1__totalServFilesSizeResponse1)
{
	if (!ns1__totalServFilesSizeResponse1)
		return soap_closesock(soap);
	soap_default__ns1__totalServFilesSizeResponse1(soap, ns1__totalServFilesSizeResponse1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__totalServFilesSizeResponse1(soap, ns1__totalServFilesSizeResponse1, "ns1:totalServFilesSizeResponse1", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.c */
